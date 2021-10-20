#include<stdio.h>
int main()
{
 unsigned int x, mask,b1,b2;
 mask=1;
 printf("enter value-b1-b2:\n");
 scanf("%x-%d-%d",&x,&b1,&b2);
 x=x^((mask<<b1)|(mask<<b2));
 printf("%x\n",x);
}

