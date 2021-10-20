#include<stdio.h>
#include<unistd.h>
int main()
{
 int x=10,y=20,z;
 z=x*y;
 printf("the product of x,y is %d\n",z);
 printf("pid of mul :%d\n",getpid());
}
