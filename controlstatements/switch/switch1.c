#include<stdio.h>
int main()
{
 int opt=2;
 switch(opt)
{
 opt=opt+3;
 case 5:printf("%d valid",opt);
break;
 case 2:printf("%d invalid",opt);
break;
 default :printf("%d none",opt);
}
}



