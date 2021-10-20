#include<stdio.h>
#include<stdlib.h>
 struct node{
             int data;
             struct node *link;
             };
struct node *head;
void createlist1();
void createlist2();
struct node *mergesort(struct node*,struct node*);
void display1();
void display2();
void display3();
int main()
{
 struct node *head1=NULL,*head2=NULL,*head3=NULL;
 int n1,n2,i;
 printf("enter the no.of elements of first list n1:\n");
 scanf("%d",&n1);
 head1=createlist1(head1,n1);
 display1(head1);


 printf("enter the no.of elements of second list n2:\n");
 scanf("%d",&n2);
 head2=createlist2(head2,n2);
 //display2(head2);
 
/* head3=mergesort(head1,head2);
 display(head3);*/

 
}




struct node *mergesort(struct node *p, struct node *q)
{
  
}








void createlist1()
 {
  int i,e;
  ptr=NULL;
  struct node *start=NULL,*prev,*temp;
  for(i=0;i<n;i++)
  {
        printf("enter the element %d:",i+1);
        scanf("%d",&e);
  
   ptr=(struct node*)malloc(1*sizeof(struct node));
        ptr->data=e;
        ptr->link=NULL;
   if(start==NULL)
        start=ptr;
   else
        prev->link=ptr;
        prev=ptr;
   }
  if(head==NULL)
  {
	head=start;
	return;
  }
	temp=head;
  while(temp->link!=NULL)
   {
	temp=temp->link;
   }
	temp->link=start;
        return;
  }

void createlist2()
 {
  int i,e;
  struct node *start=NULL,*prev,*temp;
  for(i=0;i<n;i++)
  {
        printf("enter the element %d:",i+1);
        scanf("%d",&e);
  
   ptr1=(struct node*)malloc(1*sizeof(struct node));
        ptr1->data=e;
        ptr1->link=NULL;
   if(start==NULL)
        start=ptr1;
   else
        prev->link=ptr1;
        prev=ptr1;
   }
  if(head==NULL)
  {
	head=start;
	return;
  }
	temp=head;
  while(temp->link!=NULL)
   {
	temp=temp->link;
   }
	temp->link=start;
        return;
    display2();
  }

 void display1(struct node *temp)
 {
  if(head==NULL)
  {
   printf("list is empty\n");
   return;
  }
  temp=head;

 while(temp!=NULL)
  {
   printf("adress of temp:%p-data in temp:%d\n",temp,temp->data);
   temp=temp->link;
  }
 }

void display2()
 {
 struct node *temp;
  if(head==NULL)
  {
   printf("list is empty\n");
   return;
  }
  temp=head;

 while(temp!=NULL)
  {
   printf("adress of temp:%p-data in temp:%d\n",temp,temp->data);
   temp=temp->link;
  }
 }
