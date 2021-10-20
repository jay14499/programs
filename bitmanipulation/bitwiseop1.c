#include<stdio.h>
int main()
{
 printf("%x\n",~(0xFF));
printf("%x\n", 0xFF<<8);

unsigned char x=0xffffffff;
 x=x<<8;
 printf("%x\n",x);
}
