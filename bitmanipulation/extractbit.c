#include<stdio.h>
int main()
{
 unsigned int x,mask,bit;

 printf("enter the value:mask value-bit");
 scanf("%x-%d-%d",&x,&mask,&bit);
 x=(x>>bit)&(mask);
 printf("%x\n",x);
}
