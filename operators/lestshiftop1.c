#include<stdio.h>
int main()
{
 unsigned char x=0xFF;
 x=x<<8;
 printf("%x\n",x);
 x=0xFF;
 x=x<<16;
 printf("%x\n",x);
}
