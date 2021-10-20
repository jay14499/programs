#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int main()
 {
  int fd1,fd2,fd3;
  fd1=open("1.txt",O_RDWR);
  if(fd1<0)
  {
	printf("failed to open the file\n");
	exit(1);
  }
  printf("fd1=%d\n",fd1);
  fd2=open("1.txt",O_RDWR);
  if(fd2<0)
  {
	printf("failed to open the file\n");
	exit(1);
  }
  printf("fd2=%d\n",fd2);
  fd3=open("1.txt",O_RDWR);
  if(fd3<0)
  {
	printf("failed to open the file\n");
	exit(1);
  }
  printf("fd3=%d\n",fd3);
  close(fd1);
  close(fd2);
  close(fd3);
 }
