#include<stdio.h>
#include<stdlib.h>
int main()
{
 int a[20],i,j,n,opt,sum,count,base,temp,rev,pal,bin=0;
 printf("enter the size o f array:");
 scanf("%d",&n);
 printf("enter the %d elements",n);

 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 while(1)
 {
 printf("\n\nchoose the option\n1.sum of elements\n2.count no.of digits\n3.reverse of each element\n4.dec to bin\n5.palindrome\n");
 scanf("%d",&opt);

 switch(opt)
  {
   case 0: exit(0);
   case 1: for(i=0;i<n;i++)
            {
             sum=0;
             for(j=a[i];j>0;j=j/10)
               {
                temp=j%10;
                sum=sum+temp;
               }
              printf("%d ",sum);
             }
           
           break;
 
   case 2: for(i=0;i<n;i++)
           {
            count=0;
           for(j=a[i];j>0;j=j/10)
             {
              temp=j%10;
              count++;
             }
             printf("%d ",count);
            }
          
           break;

   case 3: for(i=0;i<n;i++)
           {
            rev=0;
            for(j=a[i];j>0;j=j/10)
            {
             temp=j%10;
             rev=rev*10+temp;
             }
            printf("%d ",rev);
           }
             
           break;

   case 4: for(i=0;i<n;i++)
           {
            bin=0;
            base=1;
            for(j=a[i];j>0;j=j/2)
             {
              temp=j%2;
              bin=bin+(temp*base);
              base=base*10;
              }
             printf("%d ",bin);
            }
             
          break;
   case 5: for(i=0;i<n;i++)
           {
            pal=0;
            for(j=a[i];j>0;j=j/10)
            {
             temp=j%10;
             pal=pal*10+temp;
             }
            if(a[i]==pal)
             {
             printf("%d is a palindrome\n",a[i]);
              }
             else
             printf("%d is not a palindrome\n",a[i]);
           }
           break;
           
     
 default: printf("choose valid option\n");
  }
 }
}
