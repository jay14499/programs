#include<stdio.h>
#include<stdlib.h>
 struct node{
            int data;
            struct node *link;
           };

 void add_at_beg(int );
 void delete_at_last();
 void display_all_nodes();
 int count();
 int search(int );
 void delete_list();
 void delete_particularnode(int );
 void createlist(int *,int );
 void add_after(int ,int );
 void add_before(int ,int );
 void reverselist();
 void swapnodes(int ,int );
 void delete_duplicate();
 void selectionsort_data();
 void selectionsort_links();
 void bubblesort_data();
 void bubblesort_link();

struct node *head;
int main()
{
 int opt,num,n,n1,n2,c,val,position,i,arr[i];
 while(1)
 {
  printf("\nenter opt\n0.exit\n1.add at begining\n2.delete at begining\n3.display all nodes\n.4count no. of nodes\n5.search a particular node\n6.delete all nodes\n9.delte a particular node\n10.create a list\n11.add node after a node\n12.add node before a node\n13.reverse list\n14.swap two nodes\n15.delete duplicate nodes\n16.selection sort by nodes\n17.selection sort by links\n18.bubble sort by data\n19.bubble sort by links\n");
  scanf("%d",&opt);
  switch(opt)
   {
    case 0: exit(0);

    case 1: printf("\nenter the value:");
            scanf("%d",&num);
            add_at_beg(num);
            break;

    case 2: delete_at_beg();
            break;

    case 3: printf("\nenter the input to add at last:");
            scanf("%d",&num);
            add_last(num);
            break;


    case 4: c=count();
            printf("\nno.of nodes in list is :%d\n",c);
            break;
    case 5: printf("\nenter the input to be searched:\n");
            scanf("%d",&val);
            position=search(val);
            printf("\nposition of entered value:%d\n",position);
            break;
   
    case 6: delete_list();
            break;

    case 7: printf("enter the value you want to delte\n");
            scanf("%d",&val);
            delete_particularnode(val);
            break;

    case 8: printf("enter the no of elements\n");
             scanf("%d",&n); 
 	     for(i=0;i<n;i++)
             {
             printf("enter the element %d\n",i+1);
             scanf("%d",&arr[i]);
             }
             createlist(arr,n);
             break; 

    case 9: printf("enter the node value and enter node to be added after value\n");
             scanf("%d%d",&val,&num);
             add_after(val,num);
             break;

    case 10: printf("enter the node value and enter node to be added before value\n");
             scanf("%d%d",&val,&num);
             add_before(val,num);
             break;

    case 11: reverselist();
             break;

    case 12: printf("enter the node you want to swap:");
             scanf("%d%d",&n1,&n2);
             swapnodes(n1,n2);
             break;

    case 13: delete_duplicate();
             break;

    case 14: selectionsort_data();
             break;

    case 15: selectionsort_links();
             break;

    case 16: bubblesort_data();
             break;
    
    case 17: bubblesort_link();
             break;

    default:printf("\nchoose the vaid option\n");
  }
 }
}

 void add_at_beg(int num)
 {
        struct node *prev;
	struct node *temp=(struct node *)malloc(1*sizeof(struct node));
	if(temp==NULL)
	{
		printf("insufficient memory\n");
		exit(1);
	}
        temp->prev=NULL;
	temp->data=num;	
	if(head==NULL)
	{
		head=temp;
		printf("%d\n",temp->data);
		return;
	}
	temp->link=head;
	head=temp;
	printf("address%p-data%d\n",temp,temp->data);
  }
 

 void delete_at_beg()
 {

  struct node *temp;
  if(head==NULL)
  {
   printf("list is empty\n");
   return;
  }
 temp=head;
 head=head->link;
 free(temp);
 }


 void display_all_nodes()
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

 int count()
 {
  struct node *temp;
  int c=0;
  if(head==NULL)
   {
    printf("list is empty\n");
    return 0;
   }
  temp=head;
 
 while(temp!=NULL)
  {
   c++;
   temp=temp->link;
  }
 return c;
 }

int search(int val)
 {
  struct node *temp;
  int position=0;
  if(head==NULL)
  {
   printf("list is empty\n");
   return 0;
  }
  
 while(temp!=NULL)
  {
   temp=head;
   position++;
   if(temp->data==val)
    return position;
    temp=temp->link;
  }
  printf("element not found\n");
  return 0;
 }




void delete_particularnode(int val)
 {
  struct node *temp,*prev;
  if(head==NULL)          //list is empty
  {
	printf("list is empty\n");
	return;
  }
  if(head->data==val)     //1st node conatins the val
  {
   if(head->link==NULL)   //list contain single node it is the node
    {
        free(head);
        head=NULL;
    	return;
    }
   temp=head;            //1st node contains val but have multiple nodes
   head=head->link;
   free(temp);
   return;
  }
   temp=head->link;      //if temp contains multiple nodes
   prev=head;
   while(temp!=NULL)     //if it is last node
   {
    if(temp->data==val)   
    {
	prev->link=temp->link;
        free(temp);
	return;
    }
	prev=temp;
	temp=temp->link;
   }
  printf("element not found\n");
}
 
void createlist(int *s,int n)
 {
  int i;
  struct node *start=NULL,*ptr,*prev,*temp;
  for(i=0;i<n;i++)
  {
   ptr=(struct node*)malloc(1*sizeof(struct node));
        ptr->data=s[i];
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
  }

void add_after(int val,int num)
 {
  struct node *prev,*cur;
	struct node *ptr=(struct node *)malloc(1*sizeof(struct node));//to traverse the list
	if(ptr==NULL)
	{
		printf("insufficient memory\n");
		exit(1);
	}
	ptr->data=num;
	ptr->link=NULL;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	if(head->data==val)
	{
		if(head->link==NULL)
		{
			head->link=ptr;
			return;
		}
		ptr->link=head->link;
		head->link=ptr;
		return;
	}
	cur=head->link;
	prev=head;
	while(cur!=NULL)
	{
		prev=cur;
		cur=cur->link;
		if(prev->data==val)
		{
			prev->link=ptr;
			ptr->link=cur;
			return;
		}	
	}
	printf("element not found\n");
	
	
}

void add_before(int val,int num)
 {
  struct node *temp,*prev;
	struct node *ptr=(struct node *)malloc(1*sizeof(struct node));//to traverse the list
	if(ptr==NULL)
	{
		printf("insufficient memory\n");
		exit(1);
	}
	ptr->data=num;
	ptr->link=NULL;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	if(head->data==val)
	{
		ptr->link=head;
		head=ptr;
		return;
		
	}
	temp=head->link;
	prev=head;
	while(temp!=NULL)
	{
		if(temp->data==val)
		{
			prev->link=ptr;
			ptr->link=temp;
			return;
		}
		prev=temp;
		temp=temp->link;
	}
	printf("element not found\n");
}

void reverselist()
 {
  struct node *prev=NULL,*cur,*next=NULL;
  if(head==NULL)
  {
	printf("list is empty\n");
        exit(1);
  }
  cur=head;
  while(cur!=NULL)
  {
	next=cur->link;
	cur->link=prev;
	prev=cur;
	cur=next;
  }
  head=prev;
  return;
  printf("reversing the list is done\n");
  }

void swapnodes(int num1,int num2)
 {
  struct node *p,*q,*r,*s,*temp;
  if(num1==num2)
    return;
  q=p=head;
  while(p!=NULL)
  {
   if(p->data==num1)
    break;
    r=p;
    p=p->link;
  }
  while(q!=NULL)
  {
   if(q->data==num2)
    break;
    s=q;
    q=q->link;
   }
  if((p==NULL)||(q==NULL))
  {
   printf("element not found\n");
   return;
  }
  if((p->link!=q)&&(q->link!=p))   //not an adjacent node
  {
   temp=p->link;
   p->link=q->link;
   q->link=temp;
     if(head==p)                   //if it is the first node
     {
      s->link=p;
      head=q;
      return;
     }
       else if(head==q)
        {
         r->link=q;
         head=p;
         return;
        }
   }
  if(p->link==q)
   {
    p->link=q->link;
    q->link=p;
     if(p->link==p)
     {
      r->link=q;
     }
     else
     {
      head=q;
      return;
     }
   }
  if(q->link==p)
   {
    q->link=p->link;
    p->link=q;
     if(head!=q)
     {
      s->link=p;
     }
     else
     {
      head=p;
      return;
     }
   }
   printf("swapping done\n");
  }

void delete_duplicate()
 {
 struct node *ptr,*cur,*prev;
 if(head==NULL)
 {
	printf("list is empty\n");
        return;
 }
 for(ptr=head;ptr!=NULL;ptr=ptr->link)
  {
   for(prev=ptr,cur=ptr->link;cur!=NULL;prev=cur,cur=cur->link)
    {
     if(ptr->data==cur->data)
      {
       prev->link=cur->link;
       free(cur);
       cur=prev;
      }
    }
   }
 printf("duplicate node deleted\n");
 }


void selectionsort_data()
 {
  int temp;
  struct node *p,*q;
  for(p=head;p!=NULL;p=p->link)
  {
   for(q=p->link;q!=NULL;q=q->link)
    {
     if(p->data > q->data)
      {
       temp=p->data;
       p->data=q->data;
       q->data=temp;
      }
    }
  }
  printf("selection sort done\n");
 }


void selectionsort_links()
 {
  struct node *p,*q,*r,*s,*temp;
  for(r=p=head;p!=NULL;r=p,p=p->link)
  {
   for(s=q=p->link;q!=NULL;s=q,q=q->link)
    {
     if(p->data > q->data)
      {
        temp=p->link;
        p->link=q->link;
        q->link=temp;
         if(p!=head)
         {
          r->link=q;
         }
         else
          {
           head=q;
           s->link=p;
          }
         temp=p;
         p=q;
         q=temp;
      }
    }
  }
  printf("selection sort done\n");
 }

void bubblesort_data()
 {
  int temp;
  struct node *p,*q,*e=NULL;
  for(e=NULL;head->link!=e;e=q)
   {
   for(p=head;p->link!=e;p=p->link)
    {
     q=p->link;
     if(p->data > q->data)
      {
       temp=p->data;
       p->data=q->data;
       q->data=temp;
      }
     }
   }
   printf("bubble sort done\n");
 }   

void bubblesort_link()
 {
  struct node *p,*q,*temp,*e=NULL;
 for(e=head;e!=NULL;e=e->link)
   {
   for(p=q=head;p->link!=NULL;q=p,p=p->link)
    {
   
     if(p->data > p->link->data)
      {
       temp=p->link;
       p->link=p->link->link;
       temp->link=p;
      /* temp=p->link;
       p->link=q->link;
       q->link=temp;*/
        if(p==head) 
         {
           p=q=temp;
         }
          else
           {
           q->link=temp;
           p=temp;
           }
         temp=p;
         p=q;
         q=temp;
       }
    }
   }
}
