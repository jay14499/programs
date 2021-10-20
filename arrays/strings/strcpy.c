#include<stdio.h>
#include<string.h>
main()
{
 char src[10]="ramu",dst[10];
 
 char *ptr;
 printf("%p-%s\n",src,src);
 ptr=strcpy(dst,src);
 printf("%p-%s\n",ptr,ptr);
 printf("%p-%s\n",dst,dst);
}
