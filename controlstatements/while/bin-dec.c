#include<stdio.h>
int main()
{
 int num,temp,dec=0,base=1;
 printf("enter the number");
 scanf("%d",&num);
 
 while(num!=0)
 {
  temp=num%10;
  
  dec=dec+(temp*base);
  num=num/10;
  base=base*2;
 }
   printf("%d\n",dec);
}
