import Crypto
from Crypto.PublicKey import RSA

keysFile = "keys.txt"  # Format of keys file: n,e,d,p,q

parameters = open(keysFile, 'r').readlines()

for i in range(len(parameters)):
    parameters[i] = int(parameters[i],16)

parameters = tuple(parameters)

key = RSA.construct(parameters)

f = open("flag.txt", 'r')
plainText = f.readlines()[0]

publickey = key.publickey()
encrypted = publickey.encrypt(plainText, 32)
CT = encrypted[0]
CThex = CT.encode('hex')

f = open ("flag.encrypted", 'w')
f.write(CThex)
f.close()
