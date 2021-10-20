#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *link;
};
struct node *head=NULL,*head1,*head2;
void display();
void create_list1(int *,int);
void create_list2(int *,int);
void merge_sort();
int main()
{
  int opt;
  while(1)
  {
    printf("enter the option\n 0.exit\n 1.display\n 2.create_list1\n 3.create_list2\n 4.merge_sort\n");
    scanf("%d",&opt);
    int num,i,arr[20],arr1[20];
    switch(opt)
    {
      case 0:exit(0);
      case 1:display();
             break;
      case 2:for(i=0;i<3;i++)
              {
                scanf("%d",&arr[i]);
              }
              create_list1(arr,3);
              break;
      case 3:for(i=0;i<4;i++)
              {
                scanf("%d",&arr1[i]);
              }
              create_list2(arr1,4);
              break;
      case 4:merge_sort();
             break;
      default:printf("invalid input\n");
    }
   }
}
void display()
{
  struct node *temp;
  //list is empty
  if(head==NULL)
  {
   printf("list is empty\n");
   return;
  }
  temp=head;
  while(temp!=NULL)
  {
   printf("%d\n",temp->data);
   temp=temp->link;
  }
}
void create_list1(int *s,int n)
{
  struct node *start=NULL,*ptr,*prev,*temp;
  int i;
  for(i=0;i<n;i++)
  {
    ptr=(struct node *)malloc(1*sizeof(struct node));
    ptr->data=s[i];
    ptr->link=NULL;
    if(start==NULL)
    start=ptr;
    else
    prev->link=ptr;
    prev=ptr;
  }
  if(head1==NULL)
  {
    head1=start;
    return;
  }
  temp=head1;
  while(temp->link!=NULL)
  {
    temp=temp->link;
  }
  temp->link=start;
printf("list1 is created\n");
}
void create_list2(int *s1,int n)
{
  struct node *start=NULL,*ptr,*prev,*temp;
  int i;
  for(i=0;i<n;i++)
  {
    ptr=(struct node *)malloc(1*sizeof(struct node));
    ptr->data=s1[i];
    ptr->link=NULL;
    if(start==NULL)
    start=ptr;
    else
    prev->link=ptr;
    prev=ptr;
  }
  if(head2==NULL)
  {
    head2=start;
    return;
  }
  temp=head2;
  while(temp->link!=NULL)
  {
    temp=temp->link;
  }
  temp->link=start;
printf("list2 is created\n");
}
void merge_sort()
{
  struct node *p,*q,*ptr,*temp,*prev;
  head1=p;
  head2=q;
  ptr=(struct node *)malloc(1*sizeof(struct node));
  while(p!=NULL && q!=NULL)
  {
    if(p->data<q->data)
    { 
       if(head==NULL)
       {
         ptr->data=p->data;
         head=ptr;
         p=p->link;
         return;
       }
       else
       temp=ptr;
       {
         ptr->data=p->data;
         temp->link=ptr;
         p=p->link;
         return;
       }
     }
     if(p->data>q->data)
     {
       if(head==NULL)
       {
         ptr->data=q->data;
         head=ptr;
         q=q->link;
         return;
       }
      else
      temp=ptr;
       {
         ptr->data=q->data;
         temp->link=ptr;
         //prev=ptr;
         q=q->link;
         return;
       }
     }
  if(p!=NULL)
  {
    ptr->data=p->data;
    temp->link=ptr;
    //prev=ptr;
    p=p->link;
    return;
  }
  if(q!=NULL)
  {
    ptr->data=q->data;
    temp->link=ptr;
    //prev=ptr;
    q=q->link;
    return;
  }
 }
 printf("mergse sort is done\n");
}
