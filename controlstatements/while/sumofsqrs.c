#include<stdio.h>
int main()

{
 int x,min,max;

 int y=0;
 printf("enter the min-max value");
 scanf("%d-%d",&min,&max);
  x=min;
 while(x<=max)
 {
  y=y+(x*x);
  printf("%d\n",y);

  x++;
 }
}
