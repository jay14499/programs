#include<stdio.h>
int addition(int x,int y);
main()
{
 int x=5,y=12,z;
 printf("main: x->%d-%p, y->%d-%p\n",x,x,y,y);
 z=addition(x,y);
 printf("main:z->%d-%p\n",z,z);
}
 int addition(int x,int y)
{
 int z;
 printf("addition:x->%d-%p, y->%d-%p\n",x,x,y,y);
 z=x+y;
 printf("addition:z->%d-%p\n",z,z);
 return z;
}
