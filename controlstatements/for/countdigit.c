#include<stdio.h>
int main()
{
 int num,i,count=0;
 printf("enter the number");
 scanf("%d",&num);
 
   for(i=num;i>0;i=i/10)
   {
    count++;
  
    }
  printf("number of digits in %d is %d\n",num,count);
}
