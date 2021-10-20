#include<stdio.h>
int main()
{
 int num,rev=0,temp=0;
 printf("enter the number");
 scanf("%d",&num);
 
MOD:temp=num%10;
     rev=rev*10+temp;
     num=num/10;
if(num>0)
 goto MOD;

 printf("%d\n",rev);

}
