#include<stdio.h>
#include<unistd.h>
int main()
{
 int x=10,y=20,z;
 z=x-y;
 printf("sub :z=%d\n",z);
 printf("pid of sub=%d\n",getpid());
 char *argv1[]={"./add","10","30",NULL};
 execv("/home/jay99/codes/systemprograming/div",argv1);
}
