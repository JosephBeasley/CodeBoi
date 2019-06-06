#!/usr/bin/env python3

import socket
import json

CHUNK_SIZE = 8 * 1024
HOST = '192.168.31.1'  # Standard loopback interface address (localhost)
PORT = 65432        # Port to listen on (non-privileged ports are > 1023)

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
    s.bind((HOST, PORT))
    s.listen()
    while True:
        conn, addr = s.accept()
        with open('senders.txt', 'rb') as f:
            data = f.read(CHUNK_SIZE)
            while data:
                conn.send(data)
                data = f.read(CHUNK_SIZE)