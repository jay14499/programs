#include<stdio.h>
#define MAX 5    //integer constant
#define STRING "welcome" //string constant
#define F(X) (X)*(X) /*we have to use proper paranthesis in approprite loacations otherwise it leads to false outputs*/
int main()
{
 int x=5,res;
 res=F(x+1);
 printf("res=%d\n",res);
 printf("integer constant=%d\n",MAX);
 printf("string constant=%s\n",STRING);
}
