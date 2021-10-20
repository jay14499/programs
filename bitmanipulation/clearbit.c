#include<stdio.h>
int main()
{
 unsigned int x, mask, bit;
  
 printf("enter the value-mask-bit to be clear");
 
 scanf("%x-%x-%d",&x,&mask,&bit);
 
 x=x&(~(mask<<bit));
 
 printf("%x\n",x);

}
