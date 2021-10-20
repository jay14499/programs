#include<stdio.h>
int main()
{
 unsigned int x=0x7fffffff;//the msb bit is zero so shifted bits are replaced with zeros
 x=x>>8;
 printf("%x",x);
}
