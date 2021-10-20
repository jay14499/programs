#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
int main()
{
 int fd,res;
 char buf[100]="written_succesfully";
 fd=open("2.txt",O_WRONLY);
 if(fd<0)
 {
	printf("failed to open\n");
	exit(1);
 }
 res=write(fd,buf,strlen(buf));
}
