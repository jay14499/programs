#include<stdio.h>
void swap(int *,int *);
main()
{
 int x=10,y=20;
 printf("%p-%d\t%p-%d\n",&x,x,&y,y);
 swap(&x,&y);
 printf("%p-%d\t%p-%d\n",&x,x,&y,y);
}
 
 void swap(int *s1, int *s2)
 {
  int temp;
  temp=*s1;
  *s1=*s2;
  *s2=temp;
}
