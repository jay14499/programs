#include<stdio.h>
int main()
{
 unsigned x=0xff;
 x=x<<8;
 printf("%x\n",x);
 x=0xff;
 x=x<<16;
 printf("%x\n",x);
 x=0xff;
 x=x<<24;
 printf("%x\n",x);
}
