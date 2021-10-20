#include<stdio.h>
int main()
{
 unsigned int num,x,y;
 printf("enter the hexadecimal value");
 scanf("%x",&num);
  
 for(x=0,y=31;x<y;x++,y--)
  {
  
  num=num&(~((1<<x)|(1<<y)))|((num&(1<<x))<<(y-x))|((num&(1<<y))<<(y-x));
  
}
printf("%x\n",num);
}
