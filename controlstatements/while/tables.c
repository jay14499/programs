#include<stdio.h>
int main()
{
 int x=1;
int z;
 int y=1;
 printf("enter value y");
 scanf("%d",&y);
 while(x<=10)
{
 z=y*x;
 printf("%d*%d=%d\n",y,x,z);
 x++;
}
}
