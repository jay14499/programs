#include<stdio.h>
#include<unistd.h>
int main()
{
 int ret=truncate("file.txt",2);
 printf("%d",ret);
}
