#include<stdio.h>
int main()
{
 int min,max,count,num;
 printf("enter min-max");
 scanf("%d-%d",&min,&max);
 
 while(min<=max)
   {
    count=0;
    num=min;
   while(num>0)
    {
     count++;
     num=num/10;
     }
   printf("%d-%d\n",min,count);
   min++;
  }
}
