#include<stdio.h>
int main()
{
 int x;

 printf("enter the x valure:");

 scanf("%d",&x);

 ((x%5==0)&&(x%2==0))?printf("condition valid\n"):printf("condition invalid\n");

 //we used logical AND op so if the both condition valid then print the valu true if not the print false.

}
