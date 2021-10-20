#include<stdio.h>
int main()
{
 int x,min,max;
 int y=0;
 printf("enter min-max values");
 scanf("%d-%d",&min,&max);

 x=min;
 while(x<=max)
   {
    y=y+x;
  printf("%d\n",y);
  x++;
}
}
