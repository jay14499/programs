#include<stdio.h>
int main()
{
 int num,dec,bin=0,count=0,sum=0,rev=0,product=1,temp=0,palindrome=0,opt,i,temp1=0,temp2=0,temp3=0,base=1;
 printf("select the option\n1.count\n2.sum of digits\n3.reverse of a number\n4.palindrome\n5.decimal-binary\n");
 printf("enter the number=");
 scanf("%d",&num);
 printf("enter opt");
 scanf("%d",&opt);
 
 switch(opt)
  {
   case 1:  for(i=num;i>0;i=i/10)
              {
                count++;
              }
             printf("number of digits in the number %d=%d\n",num,count);
             break;
    
   case 2:  for(i=num;i>0;i=i/10)
              {
               temp=i%10;
               sum=sum+temp;
              }
             printf("sum of digits in a number is=%d\n",sum);
             break;

   case 3:  for(i=num;i>0;i=i/10)
              {
               temp1=i%10;
               rev=rev*10+temp1;
              }
             printf("reverse of %d is %d\n",num,rev);  
             break;

   case 4:  for(i=num;i>0;i=i/10)
              {
               temp2=i%10;
               rev=rev*10+temp2;
              }

             if(num==rev)
               printf(" %d is palindrome\n",rev);    
             else
               printf("%d not a palindrome",rev); 
               break;

   case 5:  for(i=num;i>0;i=i/2)
               {
                temp3=i%2;
                bin=bin+temp3*base;
                base=base*10;
               }
              printf("binary of % is %d\n",num,bin);
              break;
   default: printf("enter a valid input");
        }
}


                
