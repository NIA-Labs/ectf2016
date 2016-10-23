import threading
import socket
import pdb

def level1(s):
        return s == s[::-1]

def level2(s):
        return ((len(s)%2)==0)

def non_print(x):
        asc = ord(x)
        return (asc<65 or (asc>90 and asc<97) or asc>122)

def level3(s):
        temp = [x for x in s if non_print(x)]
        z = 0
        for i in temp:
            z += ord(i)
        return (z==380 and len(temp)==4 and temp.count(temp[0]) == len(temp))

def level4(s):
        return ("roor" in s)

def cool(s):
    return ("dud" == s[:3])

class ClientThread(threading.Thread):

    def __init__(self,ip,port,socket):
        threading.Thread.__init__(self)
        self.ip = ip
        self.port = port
        self.socket = socket
        print "[+] New thread started for "+ip+":"+str(port)

    def run(self):
        print "Connection from : "+ip+":"+str(port)

        self.socket.send("Give me your bomb defushing string:\n")

        string = self.socket.recv(1024).strip()

        if (level1(string) and level2(string) and level3(string) and
                level4(string) and cool(string)):
            self.socket.send("Damn you are cool and can defushe bombs. Here is your flag.\n")
            self.socket.send("ECTF{s1mple_b0mb_f0r_y0ur_squ4d}\n")
        else:
            self.socket.send("You are very good at lying mate.\n")
        
        self.socket.close()
        print "Client disconnected..."

host = "0.0.0.0"
port = 7777

tcpsock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
tcpsock.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)

tcpsock.bind((host,port))
threads = []

while True:
    tcpsock.listen(4)
    print "\nListening for incoming connections..."
    (clientsock, (ip, port)) = tcpsock.accept()

    # Let's use a new thread for each incoming connection
    newthread = ClientThread(ip, port, clientsock)
    newthread.start()
    threads.append(newthread)

for t in threads:
    t.join()
