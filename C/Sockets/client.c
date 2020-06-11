#include <netdb.h> 
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <arpa/inet.h> 
#include <stdlib.h> 
#include <string.h> 
#include <sys/socket.h> 
#define MAX 80 
#define PORT 8080 
#define SA struct sockaddr 
void func(int sockfd) 
{ 
    char buff[MAX]; 
    int n; 
    for (;;) { 
        bzero(buff, sizeof(buff)); //pega um pedaço da memória (definido pelo tamanho dado como segundo argumento) de um buffer e zera ela com \0

        // The  bzero()  function  erases  the data in the n bytes of the memory starting at the location pointed to by s, by writing zeroes (bytes containing'\0') to that area.

        printf("Enter the string : "); 
        int n = 0; 
        //while ((buff[n++] = getchar()) != '\n') ;

        char c='\0';

        for (n; c != '\n'; n++) //pega input do usuário
        {
            c = getchar();

            buff[n] = c;
    
        } 

        buff[n] ='\0';



        write(sockfd, buff, sizeof(buff)); 
        bzero(buff, sizeof(buff)); 
        read(sockfd, buff, sizeof(buff)); 
        printf("From Server : %s", buff); 
        if ((strncmp(buff, "exit", 4)) == 0) { 
            printf("Client Exit...\n"); 
            break; 
        } 
    } 
} 

int main() 
{ 
    int sockfd, connfd; 
    struct sockaddr_in servaddr, cli; 

    // socket create and varification 
    sockfd = socket(AF_INET, SOCK_STREAM, 0); //AF_INET = IPV4 , SOCK_STREAM =TCP , 0 = TCP (redundãncia, C tem dessas...)
    
    //Se retornar -1, ele n conseguiu criar, se retornar 0, conseguiu 
    if (sockfd == -1) { 
        printf("socket creation failed...\n"); 
        exit(0); 
    } 

    else
        printf("Socket successfully created..\n"); 
    bzero(&servaddr, sizeof(servaddr)); 

    // assign IP, PORT 
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = inet_addr("187.0.61.51");
    servaddr.sin_port = htons(PORT); 

    // connect the client socket to server socket 
    if (connect(sockfd, (SA*)&servaddr, sizeof(servaddr)) != 0) { 
        printf("connection with the server failed...\n"); 
        exit(0); 
    } 
    else
        printf("connected to the server..\n"); 

    // function for chat 
    func(sockfd); 

    // close the socket 
    close(sockfd);

    return 0; 
}