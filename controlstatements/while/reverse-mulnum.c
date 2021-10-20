#include<stdio.h>
int main()
{
 int rev,max,min,temp,num;
 printf("enter the min-max value=");
 scanf("%d-%d",&min,&max);
 
 while(min<=max)
  {
   rev=0;
   num=min;
   while(num!=0)
    {
     temp=num%10;
     num=num/10;
     rev=rev*10+temp;
     }
    printf("%d-%d\t",min,rev);
    min++;
   }
}
 
