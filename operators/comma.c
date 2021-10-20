#include<stdio.h>
int main()
{
 int x,y,z;
 x=10;
 y=20;
 z=30;
 z=(x,x+y,x=60,x+=20,x+y+z);
printf("%d-%d-%d\n",x,y,z);
}

