#include<stdio.h>
int main()
{
 int min,max,num=0,i=0,temp=0,rev;
 printf("enter min-max values\n");
 scanf("%d-%d",&min,&max);
 
 for(i=min;i<=max;i++)
 {
rev=0;
  for(num=i;num>0;num=num/10)
   {
    temp=num%10;
    rev=rev*10+temp;
    }
 printf(" reverse of %d is %d\n",i,rev);

   }
   
}
