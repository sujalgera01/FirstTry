#include<stdio.h>
#include<stdlib.h>
#define max 5
int stack[max];
int top=-1;
int isFull();
void push(int element);
int pop();
int isEmpty();
void display();


int main()
{

	int element,x;
	int ch;
	while(1)
	{
		printf("1.push\n");
		printf("2.pop\n");
		printf("3.peek\n");
		printf("4.display\n");
		printf("5.exit\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		       printf("enter element: ");
		       scanf("%d",&x);
		       push(x);
		       break;
		case 2: pop();
		break;
		case 3: peek();
		break;
		case 4: display()
		break;
		case 5: exit(-1);
		break;
		default: printf("wrong choice"); 
	}
}
}

int isFull()
{
	if(top==max-1)
	{
		return 1;
	}
	else{
		return 0;
	}
}

void push(int element)
{
	if(isFull())
	{
		printf("stack is full");
	}
	else{
		top++;
		stack[top]=element;
	}
}

int pop()
{
	int element;
	if(isEmpty())
	{
		printf("stack is empty");
	} 
	else{
		element=stack[top];
		top--;
	}
	return top;
}

int isEmpty()
{
	if(top==-1)
	{
		return 1;
	}
	else{
		return 0;
	}
}

int peek()
{
	if(isEmpty())
	{
		printf("stack is empty");
	}
	else{
		printf("%d\n",stack[top] );
	}
}

void display()
{
	if(isEmpty())
	{
		printf("stack is empty");
	}
	else{
		for(int i=top;i>=0;i--)
		{
			printf("%d\n",stack[i]);
		}
	}
} 
