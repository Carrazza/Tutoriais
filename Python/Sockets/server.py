import socket
import threading 


PORT = 1234 #safe bet, TODO search ports 

SERVER = socket.gethostbyname(socket.gethostname()) #This will get the IP address 


ADDR = (SERVER,PORT)


print(SERVER)

#now that we have a port and a ip we can create a socket


server = socket.socket(socket.AF_INET,socket.SOCK_STREAM)

server.bind(ADDR)
    
server.listen() #turns on the server to listen to new connections

while True:
        
    client_socket, addr = server.accept() #with this the server will accept new connections it returns a socket object and a tuple with ip and port 

    print("New Conection ",addr)

    data = client_socket.recv(1024)

    print(data.decode("utf-8"))
