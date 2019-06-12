import re, socket
keys = ['5V&$10jr@y', 'As26yx*uTB', '5V8tY7&ox^']
​
def main():
​
    returnMsg = []
​
    PORT = 3000
​
    HOST = "10.128.102.115"
​
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)    
​
    s.connect((HOST, PORT))
​
    received = s.recv(4096)
​
    print("Encoded data received: {}\n\n".format(received.decode()))
​
​
    # receives data and splits it every 2 chars.
​
    data = received.decode('utf-8')
​
    data = re.findall('..', data)
​
    
    # Iterates through keys
​
    for key in keys:
​
        keyConv = []
​
        msgConv = []
​
        text = []
​
        count = 0
​
        
        # Converts msg into decimal format
​
        for d in data:
​
            msgConv.append(int(d, 16))
​
​
        # Converts to decimal and appands
​
        for y in key:
​
            for x in y:
​
                keyConv.append(ord(x))
​
        
        # XOR decimal representation of each char in key and msg
​
        # if key is shorter than msg, count + 1.  If count >= to 
​
        # key, set count back to 0
​
        for i in msgConv:
​
            key = keyConv[count]
​
            text.append(chr(i^key))
​
            count += 1
​
            if count >= len(keyConv):
​
                count = 0
​
​
        returnMsg.append(''.join(text))
​
​
    # A while loop to iterate through each converted message
​
    # Each msg is sent to the server to elicit a response
​
    z = 0
​
    while z < len(returnMsg):
​
        s.sendall(str(returnMsg[z]+'\n').encode())
​
        data = s.recv(4096)
​
        print(data.decode())
​
        z += 1
​
 
​
    s.close()
​
​
​
if __name__ == "__main__":
​
    main()
