#include<stdio.h>
int main()
{
 int min,max;
 printf("enter the min-max");
 scanf("%d%-d",&min,&max);
 for(min=0,min<=max,min++)
 {
  if((min%5==0)&(min%6==0))
  printf("%d\t",min);
}
}
