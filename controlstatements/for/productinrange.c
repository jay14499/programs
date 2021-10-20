#include<stdio.h>
int main()
{
 int min,max,i,product=1,num=0,temp=0;
 printf("enter min-max values");
 scanf("%d-%d",&min,&max);
 
 for(i=min;i<=max;i++)
 {
   
   for(num=i;num>0;num=num/10)
   {
    temp=num%10;
    product=product*temp;
   }
 
 }
   printf("%d\n",product);
}
 
