#include<stdio.h>
int main()
{
 int min,max,i=0,j=0,temp=0,sum=0;
 printf("enter the min-max values:");
 scanf("%d-%d",&min,&max);
 
 for(i=min;i<=max;i++)
   {
  
    for(j=i;j>0;j=j/10)
     {
      temp=j%10;
      sum=sum+temp;
      }
    
   }
    printf("sum=%d\n",sum);
}
