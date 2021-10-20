#include<stdio.h>
#include<unistd.h>
int main()
{
 int x=20,y=4,z;
 z=x/y;
 printf("div pid:%d\n",getpid());
 printf("div of x,y is %d\n",z);
}
