#include<stdio.h>
int main()
{
 int x;
 x=5+2*3/2>5;
 printf("%d\n",x);
 
 x=(5+2)*3/2>5;
 printf("%d\n",x);

 x=5+2.0*3/2.0>5;
 printf("%d\n",x);
 
 x=5+2.0*3/2.0;
 printf("%d\n",x);
 
 x='A'+'B';
 printf("%d\n",x);
}

