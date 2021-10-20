#include<stdio.h>
int main()
{
 int num=0,temp,dec,base,min,max;
 printf("enter min-max");
 scanf("%d-%d",&min,&max);
  
 while(min<=max)
{
 dec=0;
num=min; 
 base=1;
 

 while(num>0)
 {
     if((num%10==1)||(num%10==0))
      {
      num++;
      continue;
      }
     else 
   temp=num%10;
   num=num/10;
   dec=dec+(temp*base);
   base=base*10;
   base++;
  
 }
  printf("%d-%d\n",min,dec);
  min++;
}
}
