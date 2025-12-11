#include<stdio.h>
#define size 5
int queue[size];
int front =-1, rear=-1;

void enqueue(int value)
{
	if((rear+1)%size==front)
	{
		printf("\n the queue overflow");
	}
	if(front==-1)
	{
		front=0;
	}
	rear=((rear+1)%size);
	queue[rear]=value;
	printf("\n the value inserted is %d",value);
}

void dequeue()
{
	if(front==-1)
	{
		printf("\n the queue is empty");
		return;
	}
	printf("\n the deleted element is %d",queue[front]);
	if(front==rear)
	{
		front=rear=-1;
		
	}else{
		
	
		front=(front+1)%size;
	}
	
}

void display()
{
	int i;
	if(front==-1)
	{
		printf("\n the queue is empty");
		return;
	}
	
	i=front;
	while(1)
	{
		printf("%d",queue[i]);
		if(i==rear)
		break;
		
		i=(i+1)%size;
		
		
	}
	printf("\n");
}
int main()
{
	int choice, value;
	
	while(1)
	{
		printf("\ncircular queue");
		printf("\n1. ENQUEUE \n2. DEQUEUE \n3.DISPLAY \n4. EXIT");
		printf("\nenter choice");
		scanf("%d",&choice);
	
		
		switch(choice)
		{
			case 1:
				    printf("\n enter the value to insert");
				    scanf("%d",&value);
				    enqueue(value);
				    break;
			case 2:
				
				dequeue();
				break;
			case 3:
				display();
				break;
			
			case 4:
				printf("\n exit");
				return 0;
				break;
			default:
				
				printf("\n error occured");
	
				
		}
	}
	return 0;
}
