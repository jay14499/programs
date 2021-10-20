#include<stdio.h>
int main()
{
  int min,max,num,product,temp;
  printf("enter min-max");
  scanf("%d-%d",&min,&max);
  
  while(min<=max)
   {
    num=min;
    product=1;
     while(num>0)
      {
       temp=num%10;
       num=num/10;
       product=product*temp;
       }
     printf("%d-%d\n",min,product);
     min++;
   }
}

