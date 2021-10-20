#include<stdio.h>
int main()
{
 int x=0x7fffffff;// here the x is signed data but the msb bit is zero so the shifted bits replaced with zeros
 x=x>>8;
 printf("%x\n",x);
}
