#include<stdio.h>
struct size
{
 char x;
 int z[2];
 float v;
 double y;
};
int main()
{
 struct size s;
 printf("struct size after rearranging is %ld\n",sizeof(struct size));
 printf("%d\n",sizeof(s.v));
}
