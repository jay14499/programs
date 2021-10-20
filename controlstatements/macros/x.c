#include<stdio.h>
int main()
{
int opt,opt1,num,mul=1,count=0,n,rem,base=1,sum=0;
printf("select the opt\n 1.count\n 2.reverse\n 3.multiplication\n");
scanf("%d",&opt);
printf("select the opt1\n 10.summation\n 20.palindrome\n 30.decimal\n");
scanf("%d",&opt1);
printf("enter the value\n");
scanf("%d",&num);
switch(opt)
{
		case 1:while(num>0)
	       {
	        num=num/10;
		count++;
		}
	       printf("%d\n",count);
		switch(opt1)
		{
			case 10:while(num!=0)
			       {
			        sum=sum+num;
			        printf("enter the input\n");
			        scanf("%d",&num);
			       }
			       printf("%d\n",sum);
			       break;
			case 20:n=num;
		               while(num>0)
			       {
			        rem=num%10;
	                        sum=sum*10+num;
			        num=num/10;
      		               }
			       if(sum==n)
	 		       printf("palindrome\n");
			       else
			       printf("not palindrome\n");
			       break;
			case 30:while(num>0)
			       {
			        rem=num%2;
			        num=num/2;
			        sum=sum+rem*base;
			        base=base*10;
			       }
			       printf("%d\n",sum);
			       break;
			default:printf("invalid input\n");
		}
		
			        
	case 2:while(num>0)
	       {
	       rem=num%10;
	       sum=sum*10+rem;
	       num=num/10;
	       }
	       printf("%d\n",sum);
	       break;
	case 3:while(num>0)
	       {
	       rem=num%10;
	       mul=mul*rem;
	       num=num/10;
	       }
	       printf("%d\n",mul);
	       break;
	default:printf("invalid input\n");
}
}
