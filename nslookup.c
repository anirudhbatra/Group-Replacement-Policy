#include<stdio.h>
#include<netdb.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<ctype.h>
#include<string.h>

char * lookup(const char *host);
int isHostname(const char *host);

int main(int argc,char *argv[])
{
    char host[25];
    int i;
    if(argc>1)
    {
              for(i=0;i<argc;i++)
              {
                    printf("Name:%s \nAddress:%s \n\n",argv[i],lookup(argv[i]));
              }
    }
    else
    {
        printf("Enter Hostname and Ip addresses.Enter \"exit\" or \"quit\" to quit\n");
        while(1)
        {
                printf("> ");
                scanf("%s",&host);
                if((strcmp(host,"exit"))==0||(strcmp(host,"quit"))==0)
                {
                    break;
                }
        }
        printf("%s\n",lookup(host));
    }
    return 0;
}

char *lookup(const char *host)
{
     struct hostent *node;
     struct in_addr address;
     if(strchr(host,":")!=NULL)
          return "IPv6 Address.....Couldn't Resoln";
     node=gethostbyname(host);
     if(node==NULL)
          return "Cannot find host";
     if(isHostname(host))
     {
           address.s_addr= *((unsigned long *)node->h_addr);
           return inet_ntoa(address);
     }
     else
     {
         inet_aton(host,&address);
         node=gethostbyaddress((const void*)&address.s_addr,sizeof(address.s_addr),AF_INET);
         return node->h_addr;
     }                   
}

int isHostname(const char *host)
{
    int i;
    int hostlength=strlen(host);
    for(i=0;i<hostlength;i++)
    {
         if(!isdigit(host[i]))
             if(host[i]!=".")
                 return 1;
    } 
    return 0;
}
