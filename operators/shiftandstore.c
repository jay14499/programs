#include<stdio.h>
int main()
{
 unsigned int x=0x11223344;
 unsigned char y;
 y=x;
 printf("%x\n",y);

 y=x>>8;
 printf("%x\n",y);

 y=x>>16;
 printf("%x\n",y);

 y=x>>24;
 printf("%x\n",y);
}
