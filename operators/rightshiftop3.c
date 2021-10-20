#include<stdio.h>
int main()
{
 int x=0xffffffff;// here the msb bit is 1 then all shifteb bits replaced with 1's if its is unsigned.

 x=x>>8;

 printf("%x\n",x);
} 

