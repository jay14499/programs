#include<stdio.h>
int main()
{
 int x=10;
 int y=20;
 const int *ptr;
 ptr=&x;// valid
 //*ptr=20; invalid the variable is constant i.e read only 
 ptr=&y;// valid we assign the adress of another variable to this
 //*ptr=10; invalid
 printf("%d\n",*ptr);

}
