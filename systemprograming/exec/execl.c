#include<stdio.h>
#include<unistd.h>
int main()
{
 execlp("ps","ps","-ef",NULL);
}
