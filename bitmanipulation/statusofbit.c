#include<stdio.h>
int main()
{
 unsigned x;
 printf("enter value in hexadecimal:");
 scanf("%x",&x);
 x=(x>>4)&(0x7);
 printf("%x",x);
}
















