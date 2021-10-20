#include<stdio.h>
int main()
{
 int min,max,temp=0,bin=0,dec,i=0,base=1;
 printf("enter min-max:");
 scanf("%d-%d",&min,&max);
 
 for(i=min;i<=max;i++)
  {
  dec=0;
  for(bin=i;bin>0;bin=bin/10)
   {
    temp=bin%10;
    if((temp!=1)&&(temp!=0))
    {
     dec=0;
     break;
    }
    dec=dec+base*temp;
    base=base*2;
   }
  }
 if(dec!=0)
  printf("%d-%d\n",min,dec);
}
   
