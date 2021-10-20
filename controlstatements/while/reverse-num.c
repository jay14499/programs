#include<stdio.h>
int main()
{
 int num,r;

 int sum=0;

 printf("enter the number\n");

 scanf("%d",&num);

 do
  {
   r=num%10;

   sum=sum*10+r;
   
   num=num/10;

  }while(num!=0);

  printf("reverse of num is=%d\n",sum);
}
