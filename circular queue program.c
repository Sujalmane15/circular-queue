#include<stdio.h>
#include<process.h>
#define size 5

int queue[size];
int rear=-1,front=-1;

void inqueue();
void dequeue();
void display();
int main()
{
int ch;

while(1)
    {
    	printf("\nPRESS 1 FOR INSERTION:");
    	printf("\nPRESS 2 FOR DELETION:");
    	printf("\nPRESS 3 FOR DISPLAY:");
    	printf("\nPRESS 4 FOR EXIT:");
    	
    	printf("\nSELECT YOUR OPTION:");
    	scanf("%d",&ch);
    	
    	if(ch==1)
    	{
    		inqueue();
	}
	else if(ch==2)
	{
		dequeue();
	}
	else if(ch==3)
	{
		display();
	}	
	else if(ch==4)
	{
		exit(0);
	}
    }	
}
void inqueue()
{
	if((front==0 && rear==size-1) || (rear+1==front))
	{
		printf("Q IS FULL\n");
		return;
	}
	if(front==-1)
	{
		rear=0;
		front=0;
	}
	else if(rear==size-1)
	{
	   rear=0;
	}
	else
	{
		rear=rear+1;
	}
	printf("ENTER THE ELEMENT LIKED LIST:\n");
	scanf("%d",&queue[rear]);
}
void dequeue()
{
	if(front==-1)
	{
		printf("Q IS EMPTY:\n");
		return;
	}
	printf("DELETED DATA:%d\n",queue[front]);
	if(front==rear)
	{
		rear=-1;
		front=-1;
	}
	else if(front==size-1)
	{
		front=0;
	}
	else
	{
		front=front+1;
	}
}
void display()
{
	int i;
	if(front==-1)
	{
	 printf("Q IS EMPTY:\n");
	 return;
	}
	if(front<=rear)
	{
		for(i=front;i<=rear;i++)
		{
			printf("\n%d",queue[i]);
		}
	}
	else
	{
	 for(i=front;i<=size-1;i++)
	 {
	 	printf("%d\n",queue[i]);
	 }
	 for(i=0;i<=rear;i++)
	 {
	 	printf("%d\n",queue[i]);
	 }
	}
}

	
