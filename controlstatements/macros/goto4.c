#include<stdio.h>
int main()
{
 int opt,opt1,num,num1,sum=0,mul=1,rem;
printf("select the options\n");
scanf("%d %d",&opt,&opt1);
printf("enter the values\n");
scanf("%d %d",&num,&num1);
 switch(opt)
{
  case 1:while(num>0)
	 {
	  sum=sum+num;
	  printf("enter the input\n");
	  scanf("%d",&num);
	 }
	 printf("%d\n",sum);
         switch(opt1)
	{
		case 2:while(num1>0)
		       {
		        rem=num1%10;
		        mul=mul*rem;
	      		num1=num1/10;
			}
			printf("%d\n",mul);
			break;
		default:printf("invalid input\n");
	}
	break;
  default:printf("invalid input\n");
}
}
