#!/usr/bin/env python3

import socket
import sys

HOST = sys.argv[1]  # The server's hostname or IP address
PORT = sys.argv[2]        # The port used by the server

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
    try:
        s.connect((str(HOST), int(PORT)))
        print("The service run on port {} is {}".format(int(PORT),socket.getservbyport(int(PORT))))
    except socket.error:
        print("bitch")