#include<stdio.h>
#include<stdlib.h>
#define max 100
int queue[max];
int front = -1;
int rear = -1;
int element,x,i;
void enqueue();
int dequeue();
int isFull();
int isEmpty();
int display();

int main()
{
	int element,ch;
	while(1)
	{
		printf("1.enqueue\n");
		printf("2.dequeue\n");
		printf("3.display\n");
		printf("4.exit\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		       printf("enter element: ");
		       scanf("%d",&x);
		       break;
		case 2: dequeue();
		break;
		case 3: display();
		break;
		case 4: exit(-1);
		break;
		default: printf("wrong choice"); 
	}
}



int isFull()
{
	if(rear>=max-1)
	{
	return 1;
	}
	else
	{
	return 0;
	}
}

void enqueue()
{
	if(isFull())
	{
	 	printf("queue is full");
	}
	if(rear==max-1 && front!=0)
	{
		rear=0;
		queue[rear]=element;
		rear++;
	}
	else
	{
	rear++;
	queue[rear]=element;
}
}

int dequeue()
{
	if(isEmpty())
	{
		printf("queue is empty");
	}
	else
	{
		for(int i=0;i<max-1;i++)
		{
			element=queue[front];
			front++;
			return element;

		}
	}
}

int isEmpty()
{
	if(front>rear)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void display()
{
	int element;
	if(isEmpty())
	{
		printf("queue if empty");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("%d",queue[i]);
		}
	}
}
}