#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>
int main()
{
 int ret=chmod("1.txt",0777);
 printf("ret=%d\n",ret);
}
