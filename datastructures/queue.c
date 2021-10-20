#include<stdio.h>
#include<stdlib.h>
 struct node{
            int data;
            struct node *link;
           };

 void insert(int );
 void delete();
 void add_last(int );
 void delete_at_last();
 void display_all_nodes();
 int count();
 int search(int );
 void delete_queue();
 void delete_particularnode(int );
 void createlist(int *,int );
 void add_after(int ,int );
 void add_before(int ,int );
 void reversequeue();
 void swapnodes(int ,int );
 void delete_duplicate();
 void selectionsort_data();
 void selectionsort_links();
 void bubblesort_data();
 void bubblesort_link();

struct node *front;
struct node *rear;
int main()
{
 int opt,num,n,n1,n2,c,val,position,i,arr[i];
 while(1)
 {
  printf("\nenter opt\n0.exit\n1.insert\n2.delete\n3.add at last\\n4.display all nodes\n5.count no. of nodes\n6.search a particular node\n7.delete queue\n8.delte a particular node\n9.create a list\n10.add node after a node\n11.add node before a node\n12.reverse list\n13.swap two nodes\n14.delete duplicate nodes\n15.selection sort by nodes\n16.selection sort by links\n17.bubble sort by data\n18.bubble sort by links\n");
  scanf("%d",&opt);
  switch(opt)
   {
    case 0: exit(0);

    case 1: printf("\nenter the value:");
            scanf("%d",&num);
            insert(num);
            break;

    case 2: delete();
            break;

    case 3: printf("\nenter the input to add at last:");
            scanf("%d",&num);
            add_last(num);
            break;

    case 4: display_all_nodes();
            break;

    case 5: c=count();
            printf("\nno.of nodes in list is :%d\n",c);
            break;
    case 6: printf("\nenter the input to be searched:\n");
            scanf("%d",&val);
            position=search(val);
            printf("\nposition of entered value:%d\n",position);
            break;
   
    case 7: delete_queue();
            break;

    case 8: printf("enter the value you want to delte\n");
            scanf("%d",&val);
            delete_particularnode(val);
            break;

    case 9: printf("enter the no of elements\n");
             scanf("%d",&n); 
 	     for(i=0;i<n;i++)
             {
             printf("enter the element %d\n",i+1);
             scanf("%d",&arr[i]);
             }
             createlist(arr,n);
             break; 

    case 10: printf("enter the node value and enter node to be added after value\n");
             scanf("%d%d",&val,&num);
             add_after(val,num);
             break;

    case 11: printf("enter the node value and enter node to be added before value\n");
             scanf("%d%d",&val,&num);
             add_before(val,num);
             break;

    case 12: reversequeue();
             break;

    case 13: printf("enter the node you want to swap:");
             scanf("%d%d",&n1,&n2);
             swapnodes(n1,n2);
             break;

    case 14: delete_duplicate();
             break;

    case 15: selectionsort_data();
             break;

    case 16: selectionsort_links();
             break;

    case 17: bubblesort_data();
             break;
    
    case 18: bubblesort_link();
             break;

    default:printf("\nchoose the vaid option\n");
  }
 }
}

 void insert(int num)
 {
        
	struct node *ptr=(struct node *)malloc(1*sizeof(struct node));
        ptr->data=num;
	if(rear==NULL)
	{
		front=rear=ptr;
                return;
	}
        rear->link=ptr;
        rear=ptr;
	printf("address%p-data%d\n",rear,rear->data);
  }
 

 void delete()
 {

  struct node *temp;
  if(front==NULL)
  {
       printf("queue is empty\n");
       return;
  }
  if(front->link==NULL)
  {
       free(front);
       front=rear=NULL;
       return;
  }
  temp=front;
  front=front->link;
  free(temp);
 }

 void add_last(int num)
 {
 struct node *temp;
	struct node *ptr=(struct node *)malloc(1*sizeof(struct node));//to traverse the list
	if(ptr==NULL)
	{
		printf("insufficient memory\n");
		exit(1);
	}
	ptr->data=num;
	ptr->link=NULL;
	if(rear==NULL)
	{
		rear=front=ptr;
		return;
	}
        rear->link=ptr;
	rear=ptr;
 }


 void display_all_nodes()
 {
  struct node *temp;
 
  if(front==NULL)
  {
   printf("list is empty\n");
   return;
  }
  temp=front;

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
  if(front==NULL)
   {
    printf("queue is empty\n");
    return 0;
   }
  temp=front;
 
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
  if(front==NULL)
  {
   printf("list is empty\n");
   return 0;
  }
  temp=front;
 while(temp!=NULL)
  {
   position++;
   if(temp->data==val)
    return position;
    temp=temp->link;
  }
  printf("element not found\n");
  return 0;
 }


void delete_queue()
 {
  struct node *temp;
  if(front==NULL)
   {
    printf("list is empty\n");
    return;
   }
  temp=front;
 while(temp!=NULL)
  {
   temp=front;
   front=front->link;
   free(temp);

  }
     
  printf("Deletion of queue is done\n");
 }

void delete_particularnode(int val)
 {
  struct node *temp,*prev;
  if(front==NULL)          //list is empty
  {
	printf("list is empty\n");
	return;
  }
  if(front->data==val)     //1st node conatins the val
  {
   if(front->link==NULL)   //list contain single node it is the node
    {
        free(front);
        front=rear=NULL;
    	return;
    }
   temp=front;            //1st node contains val but have multiple nodes
   front=front->link;
   free(temp);
   return;
  }
   prev=front;
   temp=front->link;      //if temp contains multiple nodes
   while(temp!=NULL)     //if it is last node
   {
    if(temp->data==val)   
    {
	prev->link=temp->link;
        if(prev->link==NULL)
        rear=prev;
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
  struct node *start=NULL,*last,*cur,*prev;
  for(i=0;i<n;i++)
  {
   cur=(struct node*)malloc(1*sizeof(struct node));
        cur->data=s[i];
        cur->link=NULL;
   if(start==NULL)
     {
        start=cur;
        prev=cur;
     }
   else
     {
        prev->link=cur;
        prev=cur;
     }
   }
  if(front==NULL)
  {
	front=start;
        rear=prev;
	return;
  }
	rear->link=start;
        rear=prev;
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
	if(front==NULL)
	{
		printf("queue is empty\n");
		return;
	}
         if(rear==NULL)
	{
		rear=front=ptr;
		return;
	}
	if(front->data==val)
	{
		if(front->link==NULL)
		{
			front->link=ptr;
			return;
		}
		ptr->link=front->link;
		front->link=ptr;
		return;
	}
	cur=front->link;
	prev=front;
       
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
	if(front==NULL)
	{
		printf("list is empty\n");
		return;
	}
	if(front->data==val)
	{
		ptr->link=front;
		front=ptr;
		return;
		
	}
	temp=front->link;
	prev=front;
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

void reversequeue()
 {
  struct node *prev=NULL,*cur,*next=NULL,*temp;
  if(front==NULL)
  {
	printf("list is empty\n");
        return;
  }
  cur=front;
  while(cur!=NULL)
  {
	next=cur->link;
	cur->link=prev;
	prev=cur;
	cur=next;
  }
  temp=front;
  front=rear;
  rear=temp;
  return;
  printf("reversing the list is done\n");
  }

void swapnodes(int num1,int num2)
 {
  struct node *p,*q,*r,*s,*temp;
  if(num1==num2)
    return;
  q=p=front;
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
     if(front==p)                   //if it is the first node
     {
      s->link=p;
      front=q;
      return;
     }
       else if(front==q)
        {
         r->link=q;
         front=p;
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
      front=q;
      return;
     }
   }
  if(q->link==p)
   {
    q->link=p->link;
    p->link=q;
     if(front!=q)
     {
      s->link=p;
     }
     else
     {
      front=p;
      return;
     }
   }
   printf("swapping done\n");
  }

void delete_duplicate()
 {
  struct node *p,*q,*r;
  if(front==NULL)
  {
	printf("list is empty\n");
        return;
  }

 for(p=front;p!=NULL;p=p->link)
  {
  for(q=p,r=p->link;r!=NULL;q=r,r=r->link)
    {
     if(p->data==q->data)
      {
       q->link=r->link;
       if(r->link==NULL)
       {
        rear=r;
       }
       free(q);
       q=r;
      }
    }
   }
 printf("duplicate node deleted\n");
 }


void selectionsort_data()
 {
  int temp;
  struct node *p,*q;
  for(p=front;p!=NULL;p=p->link)
  {
   for(q=p->link;q!=NULL;q=q->link)
    {
     if(p->data > q->data)
      {
       temp=p->data;
       p->data=q->data;
       q->data=temp;

      if(temp->link==NULL)
      temp=rear;
      }
    }
  }
  printf("selection sort done\n");
 }

void selectionsort_links()
 {
  struct node *p,*q,*r,*s,*temp;
   if(front==NULL)
  {
	printf("list is empty\n");
        return;
  }

  for(r=p=front;p!=NULL;r=p,p=p->link)
  {
   for(s=q=p->link;q!=NULL;s=q,q=q->link)
    {
     if(p->data > q->data)
      {
        temp=p->link;
        p->link=q->link;
        q->link=temp;
         if(p!=front)
         {
          r->link=q;
         }
         else
          
           front=q;
           s->link=p;
          
         temp=p;
         p=q;
         q=temp;
       if(temp->link==NULL)
     temp=rear;
      }
    }
  }
  printf("selection sort done\n");
 }

void bubblesort_data()
 {
  int temp;
  struct node *p,*q,*e=NULL;
  for(e=NULL;front->link!=e;e=q)
   {
   for(p=front;p->link!=e;p=p->link)
    {
     q=p->link;
     if(p->data > q->data)
      {
       temp=p->data;
       p->data=q->data;
       q->data=temp;
       if(temp->link==NULL)
     temp=rear;
      }
     }
   }
   printf("bubble sort done\n");
 }   

void bubblesort_link()
 {
  struct node *p,*q,*temp,*e=NULL;
 for(e=front;e!=NULL;e=e->link)
   {
   for(p=q=front;p->link!=NULL;q=p,p=p->link)
    {
   
     if(p->data > p->link->data)
      {
       temp=p->link;
       p->link=p->link->link;
       temp->link=p;
    
        if(p==front) 
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
     if(temp->link==NULL)
     temp=rear;
       }
    }
   }
}

