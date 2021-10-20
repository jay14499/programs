#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
void add_beg(int);
void add_last(int);
void del_beg();
void del_last();
void display();
int count();
int search(int);
void del_par();
void add_before(int,int);
void add_after(int,int);
void create_list(int *,int);
void del_list();
void rev_list();
void swap(int,int);
void sort();

struct node *head;//head ptr
int main()
{
	int opt,num,num1,num2,pos,c,n,arr[5],i,val;
	while(1)
	{
		printf("select the correct choice to perform below operations\nMENU\n0.exit\n1.add at beginning\n2.add_last\n3.del_beg\n4.del_last\n5.display\n6.count\n7.search\n8.del_par\n9.add_before\n10.add_after\n11.create_list\n12.del_list\n13.reverse\n14.swap\n15.sort\n16.del_dup\n");
		scanf("%d",&opt);
		switch(opt)
		{
		case 0:		exit(0);
		case 1: 	
				printf("enter the data:\n");
				scanf("%d",&num);
				add_beg(num);
				break;
		case 2: 	
				printf("enter the data:\n");
				scanf("%d",&num);
				add_last(num);
				break;
		case 3:		
				del_beg();
				break;
		case 4:		
				del_last();
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
				printf("enter value to be deleted:\n");
				scanf("%d",&num);
				del_par(num);
				break;
		case 9:		
				printf("enter value which need to be added before:\n ");
				scanf("%d",&val);
				printf("enter number in which value need to be added before:\n");
				scanf("%d",&num);
				add_before(num,val);
				break;
		case 10:	
				printf("enter value which need to be added:\n ");
				scanf("%d",&val);
				printf("enter number in which value need to be added after:\n");
				scanf("%d",&num);
				add_after(num,val);
				break;
		case 11:	
				printf("enter 5 inputs:\n");
				for(i=0;i<5;i++)
					scanf("%d",&arr[i]);
				create_list(arr,5);
				break;
		case 12:	
				del_list();
				break;
		case 13:	
				rev_list();
				break;
		case 14:	
				printf("enter two number which need to be swaped:\n");
				scanf("%d%d",&num1,&num2);
				swap(num1,num2);
				break;
		case 15:	
				sort();
				break;
		default:	
				printf("invalid input\n");
				break;
		}
	}
}
void add_beg(int num)
{
	struct node *temp=(struct node *)malloc(1*sizeof(struct node));
	if(temp==NULL)
	{
		printf("insufficient memory\n");
		exit(1);
	}
	temp->data=num;	
	if(head==NULL)
	{
		head=temp;
		printf("%d\n",temp->data);
		return;
	}
	temp->link=head;
	head=temp;
	printf("%d\n",temp->data);
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
	if(head==NULL)
	{
		head=ptr;
		return;
	}
	temp=head;
	while((temp->link)!=NULL)
	{
		temp=temp->link;
		printf("%d",temp->data);
	}
	temp->link=ptr;
}

void del_beg()
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
void del_last()
{
	struct node *prev,*cur;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	if(head->link==NULL)
	{
		free(head);
		head=NULL;
		return;
	}	
	prev=head;
	cur=head->link;
	while(cur->link!=NULL)
	{
		prev=cur;
		cur=cur->link;
	}
	free(cur);
	prev->link=NULL;
}
void display()
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
		printf("%d\n",temp->data);
		temp=temp->link;
	}

}
int count()
{
	int c=0;
	struct node *temp;
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
	int pos=0;
	struct node *temp;
	if(head==NULL)
	{
		printf("list is empty\n");
		return 0;
	}
	temp=head;
	while(temp!=NULL)
	{
		pos++;
		if(temp->data==val)
			return pos;
		temp=temp->link;
	}
	printf("element is not found\n");
	return 0;
}

void del_par(int val)
{
	struct node *temp,*prev;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	if(head->data==val)
	{
		if(head->link==NULL)
		{
			free(head);
			head=NULL;
			return;
		}
		temp=head;
		head=head->link;
		free(temp);
		return;
	}
	temp=head->link;
	prev=head;
	while(temp!=NULL)
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
void add_before(int num,int val)
{
	struct node *temp,*prev;
	struct node *ptr=(struct node *)malloc(1*sizeof(struct node));//to traverse the list
	if(ptr==NULL)
	{
		printf("insufficient memory\n");
		exit(1);
	}
	ptr->data=val;
	ptr->link=NULL;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	if(head->data==num)
	{
		ptr->link=head;
		head=ptr;
		return;
		
	}
	temp=head->link;
	prev=head;
	while(temp!=NULL)
	{
		if(temp->data==num)
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
void add_after(int num,int val)
{
	struct node *ptr,*temp;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	temp=head;
	while(temp!=NULL)
	{
		if(temp->data==num)
		{
			ptr=(struct node *)malloc(1*sizeof(struct node));
			ptr->data=val;
			ptr->link=temp->link;
			temp->link=ptr;
			printf("value added\n");
			return;
		}
		temp=temp->link;
	}
	printf("element not found\n");
	/*struct node *prev,*cur;
	struct node *ptr=(struct node *)malloc(1*sizeof(struct node));//to traverse the list
	if(ptr==NULL)
	{
		printf("insufficient memory\n");
		exit(1);
	}
	ptr->data=val;
	ptr->link=NULL;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	if(head->data==num)
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
		if(prev->data==num)
		{
			prev->link=ptr;
			ptr->link=cur;
			return;
		}	
	}
	printf("element not found\n");*/
	
	
}
void create_list(int *s,int n)
{
	int i;
	struct node *start=NULL;
	struct node *ptr,*prev,*temp;
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
void del_list()
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
		head=head->link;
		free(temp);
	}
	/*while(temp!=NULL)//other way of while loop
	{
		head=head->link;
		free(temp);
		temp=head;
	}*/
}

void rev_list()
{
	struct node *prev=NULL,*cur,*next;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
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
}

void swap(int num1,int num2)
{
	struct node *temp,*p,*q,*r,*s;
	if(num1==num2)
	{
		printf("swapping cannot be done for same numbers\n");
		return;
	}
	p=q=head;
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
		printf("elements not found\n");
		return;
	}
	if((p->link!=q)&&(q->link!=p))
	{
		temp=p->link;
		p->link=q->link;
		q->link=temp;
		if(p==head)
		{
			head=q;
			s->link=p;
			return;
		}
		else if(q==head)
		{
			head=p;
			r->link=q;
			return;
		}
		r->link=q;
		s->link=p;
	}
	if(p->link==q)
	{
		p->link=q->link;
		q->link=p;
		if(p==head)
		{
			head=q;
			return;
		}
		r->link=q;
		
	}
	if(q->link==p)
	{
		q->link=p->link;
		p->link=q;
		if(q==head)
		{
			head=p;
			return;
		}
		s->link=p;
		
	}
	/*struct node *prev=NULL,*cur,*next;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	if(head->link==NULL)
	{
		printf("we cant perform swap with single node\n");
		return;
	}
	cur=head;
	next=cur->link;
	while(next!=NULL)
	{
		if(((cur->data==num1)||(cur->data==num2))&&((next->data==num1)||(next->data==num2)))
		{
			prev->link=next;
			cur->link=next->link;
			next->link=cur;
			printf("entered loop\n");
			return;
		}
		next=cur->link;
		prev=cur;
		cur=next;
		
	}
	printf("elements not found\n");*/
}

void sort()
{
	struct node *p,*q,*r,*s,*temp,*temp1;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	if(head->link==NULL)
	{
		printf("only single node available\n");
		return;
	}
	p=head;
	q=p->link;
	while(p->link!=NULL)  
    	{  
        	while(q!=NULL)  
        	{  
            		if((p->data) > (q->data))  
            		{  
				if(p->link!=q)
				{
					temp=p->link;
					p->link=q->link;
					q->link=temp;
					if(p!=head)
					{
						r->link=q; 
						s->link=p;
					}
					if(p==head)
					{
						head=q;
						s->link=p;
					}
					
					temp1=p;
					p=q;
					q=temp1;
					
				}
				if(p->link==q)
				{
					p->link=q->link;
					q->link=p;
					if(p!=head)
						r->link=q;
					if(p==head)
					{
						head=q;
					}
					
					temp1=p;
					p=q;
					q=temp1;
				}

            		} 
			s=q;  
			q=q->link;
        	}
		r=p;
		p=p->link; 
		q=p->link; 
    	} 
	printf("sorting done\n");
}
