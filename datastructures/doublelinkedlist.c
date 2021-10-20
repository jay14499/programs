#include<stdio.h>
#include<stdlib.h>
 struct node{
            struct node *prev;
            int data;
            struct node *next;
           };

 void add_at_beg(int );
 void delete_at_beg();
 void add_last(int );
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
  printf("\nenter opt\n0.exit\n1.add at begining\n2.delete at begining\n3.add at last\n4.delete at last\n5.display all nodes\n6.count no. of nodes\n7.search a particular node\n8.delete all nodes\n9.delte a particular node\n10.create a list\n11.add node after a node\n12.add node before a node\n13.reverse list\n14.swap two nodes\n15.delete duplicate nodes\n16.selection sort by nodes\n17.selection sort by links\n18.bubble sort by data\n19.bubble sort by links\n");
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

    case 4: delete_at_last();
            break;

    case 5: display_all_nodes();
            break;

    case 6: c=count();
            printf("\nno.of nodes in list is :%d\n",c);
            break;
    case 7: printf("\nenter the input to be searched:\n");
            scanf("%d",&val);
            position=search(val);
            printf("\nposition of entered value:%d\n",position);
            break;
   
    case 8: delete_list();
            break;

    case 9: printf("enter the value you want to delte\n");
            scanf("%d",&val);
            delete_particularnode(val);
            break;

    case 10: printf("enter the no of elements\n");
             scanf("%d",&n); 
 	     for(i=0;i<n;i++)
             {
             printf("enter the element %d\n",i+1);
             scanf("%d",&arr[i]);
             }
             createlist(arr,n);
             break;

   
    case 11: printf("enter the node value and enter node to be added after value\n");
             scanf("%d%d",&val,&num);
             add_after(val,num);
             break;

    case 12: printf("enter the node value and enter node to be added before value\n");
             scanf("%d%d",&val,&num);
             add_before(val,num);
             break;
    case 13: reverselist();
             break;

    case 14: printf("enter the node you want to swap:");
             scanf("%d%d",&n1,&n2);
             swapnodes(n1,n2);
             break;

    case 15: delete_duplicate();
             break;

    case 16: selectionsort_data();
             break;

    case 17: selectionsort_links();
             break;

    case 18: bubblesort_data();
             break;
    
    case 19: bubblesort_link();
             break;
default:printf("\nchoose the vaid option\n");
  }
 }
}

void add_at_beg(int num)
 {
     
	struct node *ptr=(struct node *)malloc(1*sizeof(struct node));
	if(ptr==NULL)
	{
		printf("insufficient memory\n");
		exit(1);
	}
        ptr->prev=NULL;
	ptr->data=num;	
	if(head==NULL)
	{
                ptr->next=NULL;
		head=ptr;
		printf("%d\n",ptr->data);
		return;
	}
        head->prev=ptr;
        ptr->next=head;
	head=ptr;
	printf("address%p-data%d\n",ptr,ptr->data);
        return;
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
 head=head->next;
 if(head!=NULL)
  head->prev=NULL;
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
	ptr->next=NULL;
	if(head==NULL)
	{
                ptr->prev=NULL;
		head=ptr;
		return;
	}
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
        }
                temp->next=ptr;
                ptr->prev=temp;
		
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
   temp=temp->next;
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
   temp=temp->next;
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
    temp=temp->next;
  }
  printf("element not found\n");
  return 0;
 }

void delete_list()
 {
  struct node *temp;
  if(head==NULL)
   {
    printf("list is empty\n");
    return;
   }
  temp=head;
 while(head!=NULL)
  {
   temp=head;
   head=head->next;
   free(temp);
   
  }
 }

void delete_at_last()
 {
  struct node *ptr;
  if(head==NULL)                //if list is empty
   {
	printf("list is empty\n");
        return;
   }
  if(head->next==NULL)          //if list contains single node
   {
        free(head);
        head=NULL;
        return;
   }
	
	ptr=head;
 
  while(ptr->next!=NULL)
   {
	ptr=ptr->next;
   }
	free(ptr);
 }


void delete_particularnode(int num)
 {
  struct node *temp,*prev;
  if(head==NULL)          //list is empty
  {
	printf("list is empty\n");
	return;
  }
  if(head->data==num)     //1st node conatins the val
  {
   if(head->next==NULL)   //list contain single node it is the node
    {
        free(head);
        head=NULL;
    	return;
    }
   temp=head;            //1st node contains val but have multiple nodes
   head=head->next;
   free(temp);
   return;
  }
   temp=head->next;      //if temp contains multiple nodes
   prev=head;
   while(temp!=NULL)     //if it is last node
   {
    if(temp->data==num)   
    {
	temp->prev->next=temp->next;
        if(temp->next!=NULL)
        temp->next->prev=temp->prev;
        free(temp);
	return;
    }
	temp=temp->next;
   }
  printf("element not found\n");
}

void create_queue(int *ptr,int n)
{
	int i;
	struct node *start=NULL;
	struct node *nptr,*temp,*trav;
	for(i=0;i<n;i++)
	{
		nptr=(struct node *)malloc(1*sizeof(struct node));
		nptr->data=ptr[i];
		nptr->next=NULL;
		if(start==NULL)
		{
			start=nptr;
			temp=nptr;
		}
		else
		{
			temp->next=nptr;
			nptr->prev=temp;
			temp=nptr;
		}
	
	}
		if(front==NULL)
		{
			front=start;
			rear=trav;
			printf("queue is created\n");
			return;	
		}
		while(trav->next!=NULL)
		trav=trav->next;
		trav=trav->next;
		start->prev=trav;
}

void add_after(int val,int num)
 {
  struct node *temp;
	struct node *ptr=(struct node *)malloc(1*sizeof(struct node));//to traverse the list
	if(ptr==NULL)
	{
		printf("insufficient memory\n");
		exit(1);
	}
	ptr->data=num;
	ptr->next=NULL;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	temp=head;
	while(temp!=NULL)
	{
		if(temp->data==val)
		{
			
                        ptr->next=temp->next;
                        ptr->prev=temp;
                        if(temp->next!=NULL)
				temp->next->prev=ptr;
                        temp->next=ptr;
                        printf("node inserted succesfully\n");
			return;
		}
               temp=temp->next;	
	}
	printf("element not found\n");	
}

void add_before(int val,int num)
 {
  struct node *temp,*trav;
	struct node *ptr=(struct node *)malloc(1*sizeof(struct node));//to traverse the list
	if(ptr==NULL)
	{
		printf("insufficient memory\n");
		exit(1);
	}
	ptr->data=num;
	ptr->next=NULL;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	if(head->data==val)
	{
            
		ptr->next=head;
                ptr->prev=NULL;
                head->prev=ptr;
                head=ptr;
		return;
		
	     }
	temp=head->next;
	trav=head;
	while(temp!=NULL)
	{
		if(temp->data==val)
		{        
                        ptr->prev=trav;
                        trav->next=ptr;
			temp->prev=ptr;
			ptr->next=temp;
			return;
		}
		trav=temp;
		temp=temp->next;
	}
	printf("element not found\n");
}


void reverselist()
 {
  struct node *ptr,*temp,*t;
  if(head==NULL)
  {
	printf("list is empty\n");
        exit(1);
  }
  ptr=head;
  while(ptr!=NULL)
  { 
       temp=ptr->next;
       t=ptr->prev;
       ptr->prev=ptr->next;
       ptr->next=t;
       if(ptr->prev==NULL)
       head=ptr;
       ptr=temp;
  }
  printf("reversing the list is done\n");
  }
 
void delete_duplicate()
 {
 struct node *p,*q,*temp;
 if(head==NULL)
 {
	printf("list is empty\n");
        return;
 }
 for(p=head;p!=NULL;p=p->next)
  {
   for(q=p->next;q!=NULL;q=q->next)
    {
     if(p->data==q->data)
      {
       temp=q;
       q->prev->next=q->next;
       if(q->next!=NULL)
       q->next->prev=q->prev;
       q=q->prev;
       free(temp);
      }
    }
   }
 printf("duplicate node deleted\n");
 }


void swapnodes(int num1,int num2)
 {
  struct node *p,*q,*temp;
  if(num1==num2)
    return;
  q=p=head;
  while(p!=NULL)
  {
    if(p->data==num1)
    break;
    p=p->next;
  }
  while(q!=NULL)
  {
   if(q->data==num2)
    break;
    q=q->next;
   }
  if((p==NULL)||(q==NULL))
  {
   printf("element not found\n");
   return;
  }
  if((p->next!=q)&&(q->next!=p))   //not an adjacent node
  {
   temp=p->prev;
   p->prev=q->prev;
   q->prev=temp;
   
   temp=q->next;
   q->next=p->next;
   p->next=temp;
  
    if(q->next!=NULL)
      q->next->prev=q;
    if(p->prev!=NULL)
      p->prev->next=p;
      if(p=head)
        head=q;
       else if(q==head)
         head=p;
        if(p->next!=NULL)
          p->next->prev=p;
        if(q->next!=NULL)
          q->next->prev=q;
 }
          else
           {
            if(p->next==q)
             {
              q->prev=p->prev;
              p->next=q->next;
              q->next=p;
              p->prev=q;
              }
              if(p==head)
                head=q;
              else
                q->prev->next=q;
                if(p->next!=NULL)
                   p->next->prev=p;
                  
            
            else if(q->next==p)
                {
                 p->prev=q->prev;
                 q->next=p->next;
                 p->next=q;
                 q->prev=p;
                   if(head==q)
                     head=p;
                    else
                     p->prev->next=p;
                     if(q->next!=NULL)
                       q->next->prev=q;
                 }
  
}
   printf("swapping done\n");

  }

void selectionsort_data()
 {
  int temp;
  struct node *p,*q;
  for(p=head;p!=NULL;p=p->next)
  {
   for(q=p->next;q!=NULL;q=q->next)
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
  struct node *p,*q,*temp;
  if(head==NULL)
  {
    printf("list is empty\n");
    return;
  }
  for(p=head;p!=NULL;p=p->next)
  {
   for(q=p->next;q!=NULL;q=q->next)
    {
     if(p->data > q->data)
      {
        if(p->next==q)
         {
         q->prev=p->prev;
         p->next=q->next;
         q->next=p;
         p->prev=q;
         if(p==head)
           head=q;
         else
          q->prev->next=q;
         if(p->next!=NULL)
          p->next->prev=p;
       }
       else if((p->next!=q)&&(q->next!=p))   //not an adjacent node
         {
         temp=p->prev;
         p->prev=q->prev;
         q->prev=temp;
   
         temp=q->next;
         q->next=p->next;
         p->next=temp;
  
    if(q->next!=NULL)
      q->next->prev=q;
    if(p->prev!=NULL)
      p->prev->next=p;
      if(p=head)
        head=q;
       else if(q==head)
         head=p;
        if(p->next!=NULL)
          p->next->prev=p;
        if(q->prev!=NULL)
          q->prev->next=q;

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
  for(e=NULL;head->next!=e;e=q)
   {
   for(p=head;p->next!=e;p=p->next)
    {
     q=p->next;
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
 for(e=NULL;head->next!=e;e=q)
   {
   for(p=head;p->next!=e;p=p->next)
    {
     q=p->next;
     if(p->data > q->data)
      {
       if(p->next==q)
             {
              q->prev=p->prev;
              p->next=q->next;
              q->next=p;
              p->prev=q;
              
              if(p==head)
                head=q;
              else
                q->prev->next=q;
                if(p->next!=NULL)
                   p->next->prev=p;
                  
            }
            else if(q->next==p)
                {
                 p->prev=q->prev;
                 q->next=p->next;
                 p->next=q;
                 q->prev=p;
                   if(head==q)
                     head=p;
                    else
                     p->prev->next=p;
                     if(q->next!=NULL)
                       q->next->prev=q;
                 }
          temp=p;
          p=q;
          q=temp;
       }
    }
   }
}
