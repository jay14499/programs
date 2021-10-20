#include<stdio.h>
int main()
{
 int sum,temp,min,max,num;
 printf("enter the min-max=");
 scanf("%d-%d",&min,&max);
 
 while(min<=max)
  {
  num=min;
  sum=0;
  while(num>0)
   {
    temp=num%10;
    num=num/10;
    sum=sum+temp;
   }
   printf("%d-%d\n",min,sum);
   min++;
  }
}
   
