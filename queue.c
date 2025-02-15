#include<stdio.h>
#define MAX 4
int queue[MAX];
int top=0;
void enqueue()
{
	int data;
	if(MAX==top)
	{
		printf("queue overflow.\n");
	}
	else
	{
		printf("enter the data.\n");
		scanf("%d",&data);
		queue[top]=data;
		top=top+1;
	
	}
}
void dequeue()
{
	if(top==0)
	{
		printf("queue is empty.\n");
	}
	else
	{
		printf("queue removed data =%d\n",queue[--top]);
	}
}
void display()
{
	int i;
	if(top==0)
	{
		printf("queue is empty\n");
	}
	else
	{
		for(i=0;i<top;i++)
			printf("%d ",queue[i]);
	}
	printf("\n");
}
int main()
{
	int i,num;
	printf(" 1.enqueue\n 2.dequeue\n 3.display\n");
	while(1)
	{
	printf("enter the number\n");
	scanf("%d",&num);
	switch(num)
	{
		case 1: enqueue();
				break;
		case 2:dequeue();
				break;
		case 3:display();
				break;
		default:printf("enter the correct number..\n");
		//exit (0);
	}
	}
}
