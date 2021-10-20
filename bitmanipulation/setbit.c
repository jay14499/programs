#include<stdio.h>
int main()
{
 unsigned int x, mask, bit; //mask value is the value that how many bits we want to set
//bit is the value that how many bits we have to shift for position

 printf("enter the value:mask value:bit to be set:");

 scanf("%x-%x-%d",&x,&mask,&bit);

 x=x|(mask<<bit);//the left shift operator shifts the no of bits b to no of masked bits position

 printf("%x\n",x);
}
