#include<stdio.h>
int main()
{
 int dec,temp,base,bin,min,max;
 printf("enter max-min");
 scanf("%d-%d",&min,&max);


 while(min<=max)
  {
   bin=min;
   base=1;
   dec=0;
   while(bin>0)
   {
   temp=bin%10;
   if((temp!=0)&&(temp!=1))
    { 
    dec=0;
    break; 
    }
  
    bin=bin/10;
    dec=dec+base*temp;
    base=base*2;
    
   }
if(dec!=0)
  printf("%d-%d\n",min,dec);
  min++;
  }
}
