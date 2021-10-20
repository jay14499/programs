#include<stdio.h>
int main()
{
 unsigned int x,b1,b2,mask;
mask=1;

 printf("enter value:");
 scanf("%x%d%d",&x,&b1,&b2);
 x=x&(~((mask<<b1)|(mask<<b2)))|((x&(mask<<b1))>>(b2-b1))|((x&(mask<<b2))<<(b2-b1));
printf("%x\n",x);
}
