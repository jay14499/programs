#include<stdio.h>
int main()
{
 unsigned int x, b1,b2; 
//b1,b2 is the value that how many bits we have to shift for position

 printf("enter the value-bit to be setb1-b2:\n");

 scanf("%x-%d-%d",&x,&b1,&b2);

 x=x|((1<<b1)|(1<<b2));//the left shift operator shifts the no of bits in random positions b1 & b2

 printf("%x\n",x);

}
