#include<stdio.h>
#include<stdlib.h>
int main()
{
 int a[20],i,j,n,opt,opt1,opt2,sum=0;
 printf("enter the size of array:");
 scanf("%d",&n);


 for(i=0;i<n;i++)
 {
   printf("\nenter the %d element=",i+1);
  scanf("%d",&a[i]);
 }
 while(1)
 {
 printf("\nchoose the option\n1.biggest element🤗️\n2.smallest element😯️\n3.reverse of  array🙃️\n4.even or odd position summation😶️\n5.even numbers or odd numbers summation🙂️\n");
 scanf("%d",&opt);

 switch(opt)
  {
   case 0: exit(0);
   case 1: for(i=0;i<n;i++)
            {
             if(a[0]<a[i])
              {
               a[0]=a[i];
               }
             }
            printf("biggest element in array is %d\n",a[0]);
           break;
 
   case 2: for(i=0;i<n;i++)
           {
           if(a[0]>a[i])
             {
              a[0]=a[i];
             }
            }
           printf("smallest element in array is %d\n",a[0]);
           break;

   case 3: for(i=n;i>=0;i--)
           {
           printf("%d ",a[i]);
           }
           break;

   case 4: printf("\nchoose option\n1.summation elements at even position\n2.summation of elemnts at odd positions\n");
        scanf("%d",&opt1);
           switch(opt1)
            {
             case 1: for(i=0;i<n;i++)
                      {
                       if(i%2==0)
                       
                        {
                         sum=sum+a[i];
                         }
 
                      }
                     printf("summation of elemnts at even position is %d\n",sum);
                      break;
              case 2: for(i=0;i<n;i++)
                      {
                       
                       if(i%2!=0)
                        {
                         sum=sum+a[i];
                         }
                      }
                      printf("summation of elements at odd position is %d\n",sum);
                      break;
             default: printf("choose correct option/n");
            }
   case 5: printf("\n\nchoose option\n1.summation even elements\n2.summation odd elements\n");
        scanf("%d",&opt2);
        switch(opt2)
          {
           case 1:for(i=0;i<n;i++)
                  {
                   if(a[i]%2==0)
                    {
                     sum=sum+a[i];
                     }
                     else
                      printf("no even elements in this array\n");
                    }
                   printf("sum of even elemnts is %d\n",sum);
                  break;

            case 2:for(i=0;i<n;i++)
                  {
                   if(a[i]%2!=0)
                    {
                     sum=sum+a[i];
                     }
                     else
                      printf("no odd elements in this array\n");
                    }
                   printf("sum of odd elemnts is %d\n",sum);
                  break;
            default: printf("choose vallid option\n");
           }
     
 default: printf("choose valid option\n");
  }
 }
}
