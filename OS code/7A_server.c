#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/types.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	int n;
	puts("Server");
	char strMessage[5000];//[] = {"welcome", "to", "the", "module.", "This", "will", "now", "stop"};
	int fd = open("fifo6.txt", O_WRONLY);
	int fd2 = open ("fifo7.txt", O_RDONLY);
	if(fd == -1)
	{
		perror("cannot open fifo6");
		return EXIT_FAILURE;
	}
	if(fd2 == -1)
	{
		perror("cannot open fifo7");
		return EXIT_FAILURE;
	}
	puts("FIFO OPEN");
	//read string up to(5000 characters)
	char stringBuffer[5000];
	memset(stringBuffer, 0, 5000);
	int res;
	char Len;
	//while(1)
	{
		printf("\n\n\t\tEnter the Message to be passed (hitting ENTER without any string will terminate program): ");
		fgets(strMessage, 100, stdin);
		char L = (char) strlen(strMessage);
		//printf("\n\tLength of the given string: %d\n", (L-1));
		
		write(fd, &L, 1);
		write(fd, strMessage, strlen(strMessage));
		fflush(stdin);
		strMessage[0] = 0;//reseting the character array
		//if(L==1)//since null counts 1
			//break;	
		int len2;
		res = read(fd2, &len2, 1);
		//if(len2 == 1)//since null counts 1
			//break;
		
		read(fd2, stringBuffer, 5000); //Read String Characters
				
		printf("\nServer Received: %s\n", stringBuffer);
		stringBuffer[(int)len2] = 0;
	};	
	//printf("\n\nCLIENT CLOSED\n")
	//return 0;
}
