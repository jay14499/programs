#include<stdio.h>
int main()
{
 unsigned int c0,c1,num,bit;
 printf("enter the input");
 scanf("%x",&num);
 for(c0=0,c1=0,bit=0;bit<32;bit++)
 { 
  if((num&(1<<bit))==0)
  c0++;
  else
  c1++;
  }
 printf("%d-%d",c0,c1);
}
