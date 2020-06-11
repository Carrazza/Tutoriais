import socket

s = socket.socket(socket.AF_INET,socket.SOCK_STREAM)

server = socket.gethostbyname(socket.gethostname())

print(server)

s.connect((server,1234))

s.send(bytes("new server yay", "utf-8"))