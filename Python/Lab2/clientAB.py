#!/usr/bin/env python3

import socket
import json

HOST = '127.0.0.1'  # The server's hostname or IP address
PORT = 65432        # The port used by the server

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
    s.connect((HOST, PORT))
    mydict = {'one':1}
    jjjj = json.dumps(mydict)
    s.sendall(jjjj.encode())
    data = s.recv(1024)