#include<stdio.h>
int main()
{
 int a,b,c,big;
 printf("enter the three numbers:");
 scanf("%d%d%d",&a,&b,&c);
 
 if(a>b && a>c)
  printf("big=%d\n",a);
 
 if(b>a && b>c)
  printf("big=%d\n",b);
 
 if(c>a && c>b)
  printf("big=%d\n",c);
 
}
