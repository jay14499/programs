#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node *prev;
	int data;
	struct node *next;
};

void insert(int);
void delete();
void create_queue(int *,int);
void del_queue();
void display();
int count();
int search(int);
void del_par(int);
void reverse();
void add_after(int,int);
void add_before(int,int);
void swap(int,int);
void selection_sort_data();
void selection_sort_links();
void bubble_sort_data();
void bubble_sort_links();
void del_dup();
int last();

struct node *front;
struct node *rear;

int main()
{
	int opt,num,num1,num2,pos,c,n,arr[20],i,val,opt1,la;
	while(1)
	{
		printf("select the operations to perform on queue:\nMENU\n0.exit\n1.insert\n2.delete\n3.create queue\n4.delete queue\n5.display\n6.count\n7.search\n8.delete particular node\n9.add after a node\n10.add before a node\n11.reverse\n12.swap\n13.sort\n14.delete duplicate node\n15.last\n");
		scanf("%d",&opt);
		switch(opt)
		{
		case 0:		exit(0);
		case 1: 	
				printf("enter the data:\n");
				scanf("%d",&num);
				insert(num);
				break;
		case 2:		
				delete();
				break;
		case 3:		
				printf("enter number of inputs to be added:\n");
				scanf("%d",&n);
				printf("enter %d inputs:\n",n);
				for(i=0;i<n;i++)
					scanf("%d",&arr[i]);
				create_queue(arr,n);
				break;
		case 4:	
				del_queue();
				break;

		case 5:		
				display();
				break;

		
		case 6:		
				c=count();
				printf("count is %d\n",c);
				break;
		case 7:		
				printf("enter the input to be searched:\n");
				scanf("%d",&num);
				pos=search(num);
				printf("%d\n",pos);
				break;

		
		case 8: 		
				printf("enter the data:\n");
				scanf("%d",&num);
				del_par(num);
				break;
		
		

		case 9:
				printf("enter value which need to be added:\n ");
				scanf("%d",&val);
				printf("enter number in which value need to be added after:\n");
				scanf("%d",&num);
				add_after(num,val);
				break;

		case 10:	
				printf("enter value which need to be added before:\n ");
				scanf("%d",&val);
				printf("enter number in which value need to be added before:\n");
				scanf("%d",&num);
				add_before(num,val);
				break;
		case 11:	
				reverse();
				break;
		case 12:
				printf("enter two number which need to be swaped:\n");
				scanf("%d%d",&num1,&num2);
				swap(num1,num2);
				break;
		case 13:	
				printf("1.Selection sort:exchange by data\n2.Selection sort:exchange by links\n3.Bubble sort:exchange by data\n4.Bubble sort:exchange by links\n");
				scanf("%d",&opt1);
				switch(opt1)
				{
					case 1: selection_sort_data();
						break;
					case 2: selection_sort_links();
						break;
					case 3: bubble_sort_data();
						break;
					case 4: bubble_sort_links();
						break;
				}
				break;
		case 14:	
				del_dup();
				break;
		case 15:	
				la=last();
				printf("%d\n",la);
				break;
		
		default:	
				printf("invalid input\n");
				break;
		}
	}
}

void insert(int num)
{
	struct node *temp;
	struct node *ptr=(struct node *)malloc(1*sizeof(struct node));//to traverse the queue
	if(ptr==NULL)
	{
		printf("insufficient memory\n");
		exit(1);
	}
	ptr->data=num;
	ptr->next=NULL;
	if(rear==NULL)
	{
		ptr->prev=NULL;
		front=rear=ptr;
		printf("element is inserted\n");
		return;
	}
	rear->next=ptr;
	ptr->prev=rear;
	rear=ptr;
	printf("element is inserted\n");
}

void delete()
{
	struct node *temp;
	if(front==NULL)
	{
		printf("queue is empty\n");
		return;
	}
	if(front->next==NULL)
	{
		free(front);
		front=rear=NULL;
		printf("a node is deleted\n");
		return;
	}
	temp=front;
	front=front->next;
	front->prev=NULL;
	free(temp);
	printf("a node is deleted\n");
}

void create_queue(int *s,int n)
{
	int i;
	struct node *start=NULL;
	struct node *nptr,*trav,*temp;
	for(i=0;i<n;i++)
	{
		nptr=(struct node *)malloc(1*sizeof(struct node));
		nptr->data=s[i];
		nptr->next=NULL;
		if(start==NULL)
		{
			nptr->prev=NULL;
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
			rear=nptr;
			printf("queue is created\n");
			return;	
		}
		rear->next=start;
		rear=nptr;
		printf("queue is created\n");
}

void del_queue()
{
	struct node *temp;
	if(front==NULL)
	{
		printf("queue is empty\n");
		return;
	}
	temp=front;
	while(front!=NULL)
	{
		temp=front;
		front=front->next;
		free(temp);
	}
	rear=NULL;
	printf("entire queue is deleted\n");
}


void display()
{
	struct node *temp;
	if(front==NULL)
	{
		printf("queue is empty\n");
		return;
	}
	temp=front;
	while(temp!=NULL)
	{
		printf("%p-%d\n",temp,temp->data);
		temp=temp->next;
	}

}

int count()
{
	int c=0;
	struct node *temp;
	if(front==NULL)
	{
		printf("queue is empty\n");
		return 0;
	}
	temp=front;
	while(temp!=NULL)
	{
		c++;
		temp=temp->next;
	}
	return c;
}

int search(int val)
{
	int pos=0;
	struct node *temp;
	if(front==NULL)
	{
		printf("queue is empty\n");
		return 0;
	}
	temp=front;
	while(temp!=NULL)
	{
		pos++;
		if(temp->data==val)
			return pos;
		temp=temp->next;
	}
	printf("element is not found\n");
	return 0;
}

void del_par(int val)
{
	struct node *temp;
	if(front==NULL)
	{
		printf("queue is empty\n");
		return;
	}
	if(front->data==val)
	{
		if(front->next==NULL)
		{
			free(front);
			front=rear=NULL;
			printf("node is deleted\n");
			return;
		}
		temp=front;
		front=front->next;
		front->prev=NULL;
		free(temp);
		printf("node is deleted\n");
		return;
	}
	temp=front->next;
	while(temp!=NULL)
	{
		if(temp->data==val)
		{
			temp->prev->next=temp->next;
			if(temp->next!=NULL)
			{
				temp->next->prev=temp->prev;
			}
			else
				rear=temp->prev;
			free(temp);
			printf("node is deleted\n");
			return;
		}
		temp=temp->next;
	}
	printf("element not found\n");
}

void add_after(int num,int val)
{
	struct node *ptr,*temp;
	if(front==NULL)
	{
		printf("queue is empty\n");
		return;
	}
	temp=front;
	while(temp!=NULL)
	{
		if(temp->data==num)
		{
			ptr=(struct node *)malloc(1*sizeof(struct node));
			ptr->data=val;
			ptr->next=temp->next;
			ptr->prev=temp;
			if(temp->next!=NULL)
				temp->next->prev=ptr;
			else
				rear=ptr;
			temp->next=ptr;
			printf("value added\n");
			return;
		}
		temp=temp->next;
		
	}
	printf("element not found\n");
}


void add_before(int num,int val)
{
	struct node *temp,*left,*ptr;
	if(front==NULL)
	{
		printf("queue is empty\n");
		return;
	}
	if(front->data==num)
	{
		ptr=(struct node *)malloc(1*sizeof(struct node));
		ptr->data=val;
		ptr->next=front;
		ptr->prev=NULL;
		front->prev=ptr;
		front=ptr;
		printf("value added\n");
		return;
		
	}
	temp=front->next;
	left=front;
	while(temp!=NULL)
	{
		if(temp->data==num)
		{
			ptr=(struct node *)malloc(1*sizeof(struct node));
			ptr->data=val;
			ptr->prev=left;
			ptr->next=temp;
			left->next=ptr;
			temp->prev=ptr;
			printf("value added\n");
			return;
		}
		left=temp;
		temp=temp->next;
	}
	printf("element not found\n");
	
}

void reverse()
{
	struct node *left=NULL,*cur,*right,*temp;
	if(front==NULL)
	{
		printf("queue is empty\n");
		return;
	}
	rear=front;
	cur=front;
	while(cur!=NULL)
	{
		if(cur->next==NULL)
			left=cur;
		right=cur->next;

		temp=cur->prev;
		cur->prev=cur->next;
		cur->next=temp;

		cur=right;
	}
	front=left;
	printf("queue is reversed\n");
}

void swap(int num1,int num2)
{
	struct node *temp,*p,*q;
	if(front==NULL)
	{
		printf("queue is empty\n");
		return;
	}
	if(num1==num2)
	{
		printf("swapping cannot be done for same numbers\n");
		return;
	}
	p=q=front;
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
		printf("elements not found\n");
		return;
	}
	if((p->next!=q)&&(q->next!=p))
	{
		temp=p->prev;
		p->prev=q->prev;
		q->prev=temp;

		temp=q->next;
		q->next=p->next;
		p->next=temp;

		if(q->prev!=NULL)
			q->prev->next=q;
		else
			front=q;
		if(q->next!=NULL)
			q->next->prev=q;
		else
			rear=q;
		if(p->prev!=NULL)
			p->prev->next=p;
		else
			front=p;
		if(p->next!=NULL)
			p->next->prev=p;
		else
			rear=p;
		
	}
	else if(p->next==q)
	{
		q->prev=p->prev;
		p->next=q->next;
		q->next=p;
		p->prev=q;
		if(p==front)
			front=q;
		else
			q->prev->next=q;
		if(p->next!=NULL)
			p->next->prev=p;
		else
			rear=p;
		
	}
	else if(q->next==p)
	{
		p->prev=q->prev;
		q->next=p->next;
		p->next=q;
		q->prev=p;
		if(q==front)
			front=p;
		else
			p->prev->next=p;
		if(q->next!=NULL)
			q->next->prev=q;
		else
			rear=q;
	}
}

void selection_sort_data()
{
	struct node *p,*q;
	int temp;
	for(p=front;p!=NULL;p=p->next)
	{
		for(q=p->next;q!=NULL;q=q->next)
		{
			if((p->data) > (q->data))
			{
				temp=p->data;
				p->data=q->data;
				q->data=temp;
			}
		}
	}
	printf("Selection sort:exchange by data is done\n\n");
}

void selection_sort_links()
{
	struct node *p,*q,*temp;
	for(p=front;p!=NULL;p=p->next)
	{
		for(q=p->next;q!=NULL;q=q->next)
		{
			if((p->data) > (q->data))
			{
				if(p->next!=q)
				{
					temp=p->prev;
					p->prev=q->prev;
					q->prev=temp;

					temp=q->next;
					q->next=p->next;
					p->next=temp;

					if(p->next!=NULL)
						p->next->prev=p;
					else
						rear=p;
					if(q->prev!=NULL)
						q->prev->next=q;
					else
						front=q;
					q->next->prev=q;
					p->prev->next=p;
				}
				else if(p->next==q)
				{
					q->prev=p->prev;
					p->next=q->next;
					q->next=p;
					p->prev=q;
					if(p==front)
						front=q;
					else
						q->prev->next=q;
					if(p->next!=NULL)
						p->next->prev=p;
					else
						rear=p;
				}
	
				temp=p;
				p=q;
				q=temp;
			}
		}
	}
	printf("Selection sort:exchange by links is done\n\n");
}

void bubble_sort_data()
{
	struct node *p,*q,*e;
	int temp;
	for(e=NULL;front->next!=e;e=q)
	{
		for(p=front;p->next!=e;p=p->next)
		{
			q=p->next;
			if((p->data) > (q->data))
			{
				temp=p->data;
				p->data=q->data;
				q->data=temp;
			}
		}
		
	}
	printf("Bubble sort:exchange by data is done\n\n");
}

void bubble_sort_links()
{
	struct node *p,*q,*e,*temp;
	for(e=NULL;front->next!=e;e=q)
	{
		for(p=front;p->next!=e;p=p->next)
		{
			q=p->next;
			if((p->data) > (q->data))
			{
				q->prev=p->prev;
				p->next=q->next;
				q->next=p;
				p->prev=q;
				if(p==front)
					front=q;
				else
					q->prev->next=q;
				if(p->next!=NULL)
					p->next->prev=p;
				else
						rear=p;
				temp=p;
				p=q;
				q=temp;
			}
		}
		
	}
	printf("Bubble sort:exchange by links is done\n\n");
}

void del_dup()
{
	struct node *p,*q,*temp;
	if(front==NULL)
	{
		printf("queue is empty\n");
		return;
	}
	for(p=front;p!=NULL;p=p->next)  
    	{  
        	for(q=p->next;q!=NULL;q=q->next)  
        	{  
            		if(p->data==q->data)  
            		{  
				temp=q;
				q->prev->next=q->next;
				if(q->next!=NULL)
					q->next->prev=q->prev;
					
					rear=q->prev;
					
				
				//q=q->prev;
				free(temp);
            		} 
        	}
    	} 
}

int last()
{
	return(rear->data);
}
