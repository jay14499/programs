#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
int main()
{
 int ret=chown("file.txt",1000,1000);
 printf("ret=%d\n",ret);
}
