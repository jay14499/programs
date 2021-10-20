#include<stdio.h>
void sum(int *);
void count(int *);
void palindrome(int *);
void reverse(int *);
void dec_bin(int *);
void main()
{
 int opt, num;
 printf("enter number:\n");
 scanf("%d",&num);
 printf("choose the option\n1.sum of digits\n2.count the no. of   digits\n3.palindrome\n4.reverse\n5.decimal to binary\n");
 scanf("%d",&opt);
 switch(opt)
  {
   case 1: sum(&num);
           break;
   case 2: count(&num);
           break;
   case 3: palindrome(&num);
           break;
   case 4: reverse(&num);
           break;
   case 5: dec_bin(&num);
           break;
   default:printf("invalid\n");
  }
  }
void sum(int *n)
{
 int i,temp,sum=0;
 for(i=*n;i>0;i=i/10)
  {
   temp=i%10;
   sum=sum+temp;
   }
 printf("sum of digits is %d\n",sum);
}

void count(int *n)
{
 int i,temp,count=0;
 for(i=*n;i>0;i=i/10)
  {
   temp=i%10;
   count++;
   }
  printf("the no of digits in the number is %d\n",count);
}

void palindrome(int *n)
{
 int i,temp,rev=0;
 for(i=*n;i>0;i=i/10)
  {
   temp=i%10;
   rev=rev*10+temp;
   }
   if(*n==rev)
   printf("palindrome\n");
   else
   printf("not a palindrome\n");
}

void reverse(int *n)
{
 int i,temp,rev=0;
 for(i=*n;i>0;i=i/10)
  {
   temp=i%10;
   rev=rev*10+temp;
   }
  printf("reverse of number is %d\n",rev);
}

void dec_bin(int *n)
{
 int i,temp,bin=0,base=1;
 for(i=*n;i>0;i=i/2)
  {
   temp=i%2;
   bin=bin+temp*base;
   base=base*10;
   }
  printf("binary equivalent of decimal is %d\n",bin);
}


 
