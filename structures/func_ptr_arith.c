#include<stdio.h>
int add(int,int);  //fucntion declarations
int sub(int,int);
struct arithematic_ops
 {
  int (*f_add)(int,int);
  int (*f_sub)(int,int);
 };
 
int add(int x,int y)
 {
  return x+y;
 }

int sub(int x,int y)
 {
  return x-y;
 }

int main()
{
 int x=15,y=10,z;
 struct arithematic_ops fops;
 fops.f_add=add;
 fops.f_sub=sub;

z=fops.f_add(x,y);
printf("addition of %d and %d is %d\n",x,y,z);
z=fops.f_sub(x,y);
printf("subtraction of %d and %d is %d\n",x,y,z);
}
