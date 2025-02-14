#include<stdio.h>
#define MAX 4
int stack[MAX];
int top=0;
void push()
{
	int data;
	if(MAX==top)
	{
		printf("stack overflow.\n");
	}
	else
	{
		printf("enter the data.\n");
		scanf("%d",&data);
		stack[top]=data;
		top=top+1;
	
	}
}
void pop()
{
	if(top==0)
	{
		printf("stack is empty.\n");
	}
	else
	{
		printf("stack removed data =%d\n",stack[--top]);
	}
}
void display()
{
	int i;
	if(top==0)
	{
		printf("stack is empty\n");
	}
	else
	{
		for(i=0;i<top;i++)
			printf("%d ",stack[i]);
	}
	printf("\n");
}
int main()
{
	int i,num;
	printf(" 1.push\n 2.pop\n 3.display\n");
	while(1)
	{
	printf("enter the number\n");
	scanf("%d",&num);
	switch(num)
	{
		case 1: push();
				break;
		case 2:pop();
				break;
		case 3:display();
				break;
		default:printf("enter the correct number..\n");
		//exit (0);
	}
	}
}
