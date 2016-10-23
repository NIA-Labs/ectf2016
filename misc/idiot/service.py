import sys
import ast
import datetime

from twisted.internet import defer
from twisted.internet.protocol import DatagramProtocol
from twisted.internet import reactor
from twisted.python import log

import txthings.resource as resource
import txthings.coap as coap


payload_map = {}

class BlockResource (resource.CoAPResource):

    def __init__(self):
        resource.CoAPResource.__init__(self)
        self.visible = True

    def render_GET(self, request):
        ip = request.remote[0]
        if ip not in payload_map:
            payload_map[ip] = '{"Do I want the flag?": "no"}'
        try:
            if ast.literal_eval(payload_map[ip]) == {"Do I want the flag?": "yes"}:
                payload_map[ip] = 'ECTF{omg_scrubs_g1ve_me_sumting_harda}'
            else:
                payload_map[ip] = '{"Do I want the flag?": "no"}'
        except:
            payload_map[ip] = '{"Do I want the flag?": "no"}'
        response = coap.Message(code=coap.CONTENT, payload=payload_map[ip])
        return defer.succeed(response)

    def render_PUT(self, request):
        ip = request.remote[0]
        toSend = "You high?"
        try:
            if request.payload != "":
                payload_map[ip] = request.payload
                toSend = "Resource updated."
        except:
            payload_map[ip] = ""
        response = coap.Message(code=coap.CHANGED, payload=toSend)
        return defer.succeed(response)

class CoreResource(resource.CoAPResource):

    def __init__(self, root):
        resource.CoAPResource.__init__(self)
        self.root = root

    def render_GET(self, request):
        data = []
        ip = request.remote[0]
        self.root.generateResourceList(data, "")
        payload = ",".join(data)
        response = coap.Message(code=coap.CONTENT, payload=payload)
        response.opt.content_format = coap.media_types_rev['application/link-format']
        return defer.succeed(response)

# Resource tree creation
log.startLogging(sys.stdout)
root = resource.CoAPResource()

well_known = resource.CoAPResource()
root.putChild('.well-known', well_known)
core = CoreResource(root)
well_known.putChild('core', core)

suspicious = BlockResource()
root.putChild('suspicious', suspicious)

endpoint = resource.Endpoint(root)
reactor.listenUDP(coap.COAP_PORT, coap.Coap(endpoint), interface="::")

reactor.run()