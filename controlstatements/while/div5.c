#include<stdio.h>
int main()
{
 int min,max,temp;
 printf("enter the range min-max=");
 scanf("%d-%d",&min,&max);

  temp=min;
  if(temp%5 !=0)
   temp=temp+(5-(temp%5));
 
   while(temp<=max)
    {
     printf("%d\t",temp);
     temp=temp+5;
    }
}
