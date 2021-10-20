#include<stdio.h>
int dectobin(int);
int main()
{
 int num,bin;
 printf("enter the decimal number:\n");
 scanf("%d",&num);
 bin=dectobin(num);
 printf("decimal equivalent of %d is%d\n",num,bin);
 
}
 
int dectobin(int num)
 {
  static int temp,bin=0,base=1;
  
  if(num>0)
  {
   temp=num%2;
   bin=bin+temp*base;
   base=base*10;
   dectobin(num=num/2);
  }
  return bin;
 
 }
