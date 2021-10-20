#include<stdio.h>
int main()
{
 int x,y,res;
 char opt;

 printf("enter opt:"); 

 scanf("%c", &opt);

 printf("enter x,y values:");

 scanf("%d%d",&x,&y);

 res=(opt=='+')?(x+y):(((opt =='-')?(x-y):(opt=='*'))?(x*y):(res=0,printf("ivalid    input")));

// (opt=='+')?(res=x+y):(((opt =='-')?(res=x-y):(opt=='*'))?(res=x*y):(res=0,printf("ivalid    input")));
//if we give opt=+ the the res value stores x+y value if other opt is other then check the condition and get stored the result in res.

 printf("%d\n",res);
}
