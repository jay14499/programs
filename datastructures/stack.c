#include<stdio.h>
#include<stdlib.h>
void push(int x);
void pop();
void display();
int search(int );
int count();
#define n 50
int a[n];
int i=-1;


int main()
{
    int opt,x,c,s,i,p;
    
    while(1)
    {
        printf("0.exit\n1.Push an element on the top\n2.pop an element\n3.display stack\n4.count\n5.search\n6.sort\n");
        printf("Enter your option: ");
        scanf("%d", &opt);

        
        switch(opt)
        {
        case 0: exit(0);

        case 1: printf("Enter the element to be pushed : ");
                scanf("%d", &x);
                push(x);
                break;

        case 2: pop();
                break;

        case 3: display();
                break;

        case 4: c=count();
                printf("no of elements in stack : %d",c);
                break;

        case 5: printf("enter the element to be searched");
                scanf("%d",&x);
                s=search(x);
                printf("the element is at i=%d\n",s);
                break;

            printf("choose valid opt\n");
            break;
        }
        printf("\n");
    }
}


void push(int x)
{
    if(i==n-1)
       {
        printf("Stack is full\n");
        return; 
       }
    i= i+1;
    a[i] = x;
    printf("pushed element to stack: %d\n",a[i]);
}
void pop()
{
    int x;
    
      if(i==-1)
        {
         printf("Stack is empty\n");
         exit(1);
         }
    x = a[i];
    i= i-1;
    printf("popped element is:%d\n",x);
    return;
}

void display()
{
    int j;
    
    printf("i = %d\n", i);
    if(i==-1)
    {
        printf("Stack is Empty\n");
        return;
    }
   
    for(j=i;j>=0;j--)
        printf(" %d\n", a[j]);
}

int count()
{
 int j,count=0;
 if(i==-1)
    {
        printf("Stack is Empty\n");
        return 0;
    }
  for(j=0;j<i;j++)
    {
       count++;
     }
    return count+1;
}

int search(int num)
{
 int j,count=0;
 if(i==-1)
    {
        printf("Stack is Empty\n");
        return 0;
    }
  for(j=0;j<i;j++)
    {
       count++;
       if(a[j]==num)
      
         return count;
        
        
     }
    printf("element not found\n");
}


