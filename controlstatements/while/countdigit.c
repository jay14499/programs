#include<stdio.h>
int main()
{
 int num;
 int count =0;
 printf("enter the value:");
 scanf("%d", &num);
if(num==0)
count=1;
else
{
 while(num>0)
{
 count++;
 num=num/10;
}
printf("%d\n",count);

 }
}

