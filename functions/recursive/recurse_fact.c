#include<stdio.h>
int fact(int n);
int main()
{
 int n,res;
 printf("enter the value n=\n");
 scanf("%d",&n);
 printf("main:invoking fact(%d)\n",n);
 res=fact(n);
 printf("main: fact(%d)->%d\n",n,res);
}
 
int fact(int n)
{
 int res;
 printf("fact(%d):is invoked\n",n);
 if(n==0)
  {
   printf("fact(%d):return val->%d\n",n,1);
   return 1;
  }
 res=n*fact(n-1);
 printf("fact(%d): return val->%d\n",n,res);
 return res;
}


