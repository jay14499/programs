#include<stdio.h>
int main()
{
 int x,y,z,big;

 printf("enter the x,y,z values:");

 scanf("%d%d%d\n",&x,&y,&z);

 big=(x>y)?((x>z)?x:z):((y>z)?y:z); //conditon for largest number- if x>y the condition true then go to true condition and validates if x>z then it compares in x,z values and stores the larest vale in big 

 printf("%d",big);
}
