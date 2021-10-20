#include<stdio.h>
void line(void);
main()
{
 line();
}
void line(void)
{
int i;
for(i=1;i<=80;i++)
printf("--");
}
