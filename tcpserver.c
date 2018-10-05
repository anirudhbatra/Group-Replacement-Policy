#include<stdio.h>
#include<netinet/in.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<netdb.h>
#include<stdlib.h>
#include<string.h>
#define max 80
#define PORT 43454
#define SA struct sockaddr

void func(int sockfd)
{
     char buff[MAX];
     int n;
     for(;;)
     {
            bzero(buff,MAX);
            read(sockfd,buff,sizeof(buff));
            printf("From client:%s\t To client:",buff);
            bzero(buff,MAX);
            n=0;
            while((buff[n++]=getchar())!='\n');
               write(sockfd,buff,sizeof(buff));
               if(strncmp("exit",buff,4)==0)
               {
                   printf("Server Exit...\n");
                   break;
               }
     }
}
int main()
{
    int sockfd,connfd,len;
    struct sockaddr_in servaddr,cliaddr;
    sockfd=socket(AF_INET,SOCK_STREAM,0);
    if(sockfd==-1)
    {
         printf("socket creation failed...\n");
         exit(0);
    }  
    else
    {
        printf("Socket successfully created...\n");
        bzero(&servaddr,sizeof(servaddr));
        servaddr.sin_family=AF_INET;
        servaddr.sin_addr.s_addr=htonl(INADDR_ANY);
        servaddr.sin_port=htons(PORT);
        if(bind(sockfd,(SA*)&servaddr,sizeof(seraddr))!=0)
        {
             printf("Socked binding failed...\n");
             exit(0);
        }
        else
             printf("Socket successfully binded...\n");
             if(listen(sockfd,5)!=0)
             {
                  if("Listen Failed...\n");
                  exit(0);
             }
             else
                  printf("Server Listening...\n")
             len=sizeof(cliaddr);
             connfd=accept(sockfd,(SA*)&cliaddr,len);
             if(connfd<0)
             {
                   printf("server accept failed..\n");
                   exit(0);
              }
              else
                 printf("server accept the client...\n");
                      
              func(connfd);
              close(connfd);
    }
    return 0;   
}

void func(int sockfd)
{
}
