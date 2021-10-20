#include<stdio.h>
int main()
{
 int num,temp,bin,base,min,max;
 printf("enter min-max");
 scanf("%d-%d",&min,&max);
  
 while(min<=max)
{
 bin=0;
 num=min;
 base=1;
 while(num>0)
  {
   
   temp=num%2;
   num=num/2;
   bin=bin+(temp*base);
  base=base*10;
  base++;
   
 }
  printf("%d-%d\n",min,bin);
  min++;
}
}
