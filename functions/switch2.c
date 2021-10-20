#include<stdio.h>
#include<stdlib.h>
#define N 5
void read(int *ptr,int n);
void display(int *ptr,int i,int n);
int main()
{
        int opt,i,j,temp,count,rev,bin,sum,base=1;
        void (*f_read)(int *ptr,int n);
        void (*f_display)(int *ptr,int n);
        f_read=read;
	f_display=display;
	int *ptr=(int *)malloc(5*sizeof(int));
	if(ptr==NULL)
	{
		printf("insufficient memory\n");
		exit(1);
	}

    printf("choose the option\n1.sum of digits\n2.count the no. of   digits\n3.palindrome\n4.reverse\n5.decimal to binary\n");
 scanf("%d",&opt);
 switch(opt)
  {
   case 1:
           sum=0;
           for(j=0;j<N;j++)
            {
             for(i=ptr[i];i>0;i=i/10)
              {
              temp=i%10;
              sum=sum+temp;
             }
           f_display(ptr,sum);
           }
           free(ptr);
           break;
   case 2: 
           count=0;
           for(j=0;j<N;j++)
            {
           for(i=ptr[i];i>0;i=i/10)
            {
             temp=i%10;
             count++;
            }
            f_display(ptr,count);
            }
           free(ptr);
           break;
           
   case 3:  
           rev=0;
           for(j=0;j<N;j++)
            {
           for(i=ptr[i];i>0;i=i/10)
            {
             temp=i%10;
             rev=rev*10+temp;
            }
            if(rev==ptr[i])
            f_display(ptr,rev);
            else
            printf("%d is not a palimdrome\n",ptr[i]);
            }
           free(ptr);
           break;
   case 4: 
           rev=0;
           for(j=0;j<N;j++)
            {
           for(i=ptr[i];i>0;i=i/10)
            {
             temp=i%10;
             rev=rev*10+temp;
            }
            f_display(ptr,rev);
            }
            free(ptr);
            break;
   case 5:
           bin=0;
           for(j=0;j<N;j++)
            {
           for(i=ptr[i];i>0;i=i/2)
            {
             temp=i%2;
             bin=bin+temp*base;
             bin=bin*10;
            }
           f_display(ptr,bin);
           }
           free(ptr);
           break;
   default:printf("invalid\n");
  }


 
}
 void read(int *ptr,int n)
{
 int i;
	for(i=0;i<n;i++)
	{
		printf("enter input:\n");
		scanf("%d",&ptr[i]);
	}
}
 void display(int *ptr,int i,int n)
{
 for(i=0;i<n;i++)
{
 printf("%d-%d\n",ptr[i],n);
}
}
