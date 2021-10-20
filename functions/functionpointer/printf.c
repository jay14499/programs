#include<stdio.h>
#include<stdlib.h>
int main()
{
 int(*fptr_printf)(const char *str,...);
 fptr_printf=printf;
 fptr_printf("welcome\n");
}
