#include<stdio.h>
int sum(int num);
int count(int num);
int reverse(int num);
int dectobin(int num);
int palindrome(int num);
int main()
{
 int num,res,opt;
 printf("enter number");
 scanf("%d",&num);
 printf("choose the option\n1.sum\n2.count\n3.reverse\n4.dec-bin\n5.palindrome\n");
 scanf("%d",&opt);
 
 switch(opt)
 {
  case 1: res=sum(num);
          printf("sum of digits in number=%d\n",res);
          break;

  case 2: res=count(num);
          printf("count digits in number=%d\n",res);
          break;

  case 3: res=reverse(num);
          printf("reverse of %d is %d\n",num,res);
          break;

  case 4: res=dectobin(num);
          printf("dec-bin=%d\n",res);
          break;

  case 5: res=palindrome(num);
          printf("%d\n",res);
          break;
  default: printf("wrong choice\n");
 }
 return 0;
 }
 
  int sum(int num)
   {
    int sum=0,temp=0,i=0;
     
    for(i=num;i>0;i=i/10)
     {
      temp=i%10;
      sum=sum+temp;
      }
      return sum;
   }

  int count(int num)
   {
    int temp=0,count=0,i;
    for(i=num;i>0;i=i/10)
     {
      temp=i%10;
      count++;
     }
      return count;
   }

  int reverse(int num)
   {
    int temp=0,rev=0,i;
    for(i=num;i>0;i=i/10)
     {
      temp=i%10;
      rev=rev*10+temp;
     }
      return rev;
   }

  int dectobin(int num)
   {
    int temp=0,base=1,bin=0,i=0;
    for(i=num;i>0;i=i/2)
     {
      temp=i%2;
      bin=bin+temp*base;
      base=base*10;
      base++;
     }
      return bin;
   }

  int palindrome(int num)
   {
   int res=0,rev=0,temp=0,i=0;
    for(i=num;i>0;i=i/10)
     {
      temp=i%10;
      rev=rev*10+temp;
     }
      if(rev=i)
      res=printf("%d is palindrome",i);
      else
      res=printf("%d is not palindrome",i);
      return res;
   }
