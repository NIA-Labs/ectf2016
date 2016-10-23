import threading
import base64
import random
import roman
import socket
import sys
import os


def coinToss():
    return random.random() > 0.5

class ClientThread(threading.Thread):

    def __init__(self,ip,port,socket):
        threading.Thread.__init__(self)
        self.ip = ip
        self.port = port
        self.socket = socket
        print "[+] New thread started for "+ip+":"+str(port)

    def basicInteraction(self, i, puzzle=None):
        if not puzzle:
            with open("/home/challenge/puzzles/{0}.txt".format(str(i)), 'r') as f:
                vanillaPuzzle = f.read().strip()
                self.socket.send(vanillaPuzzle + "\n")
        else:
            self.socket.send(puzzle + "\n")

        answer = self.socket.recv(1024).strip()
        with open("/home/challenge/solutions/{0}.txt".format(str(i)), 'r') as f:
            expectedAnswer = f.read().strip()
            if answer != expectedAnswer:
                self.socket.send("Ummm... no.\n")
                self.socket.close()
                print "Client disconnected..."

    def charMap(self, i, ch):
        if i in range(25, 50):
            return '<' + roman.toRoman(ch) + '>'
        if i in range(50, 75):
            return '(' + bin(ch)[2:] + ')'
        if i in range(75, 100):
            return '[' + base64.b64encode(str(ch)) + ']'

    def run(self):
        print "Connection from : "+ip+":"+str(port)

        for i in range(25):
            self.basicInteraction(i)

        for i in range(25, 100):
            puzzle = list(open('/home/challenge/puzzles/{0}.txt'.format(str(i))).read().strip())
            for idx in range(81):
                if coinToss() and puzzle[idx] != '.':
                    puzzle[idx] = self.charMap(i, int(puzzle[idx]))
            self.basicInteraction(i, ''.join(puzzle))

        self.socket.send("Sorry we had to put you through that. Please accept this apology.\n")
        self.socket.send("ECTF{jk_w3_41n7_s0rrY}\n")
       	self.socket.close()
        print "Client disconnected..."

host = "0.0.0.0"
port = 10101

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