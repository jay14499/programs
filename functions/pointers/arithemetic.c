#include<stdio.h>
int main()
{
 int *ptr=(int *)malloc(5*sizeof(int));
 for(int i=0;i<5;i++)
{
 scanf("%d\n",ptr+i);
}
for(int i=0;i<5;i++)
{
 //scanf("%d\n",ptr+i);
 printf("%p-%d\n", ptr+i,*(ptr+i));
 printf("%p-%d\n", i+ptr,*(i+ptr));
 printf("%p-%d\n", &ptr[i],ptr[i]);
 printf("%p-%d\n", &i[ptr],i[ptr]);
}
}
