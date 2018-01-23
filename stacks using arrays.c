#include<stdio.h>
#include<stdlib.h>
#define max 50
void push();
void pop();
void display();
int stack[max],top=0;
int main()
{
	int c;
	printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
	do
	{
		printf("\nChoice is ");
		scanf("%d",&c);
		switch(c)
		{
			case 1: push();break;
			case 2: pop();break;
			case 3: display();break;
			case 4: exit(0);break;
			default: printf("\nInvalid choice");
		}
	}while(c!=5);
	return 0;
}
void push()
{
	if(top==max)
	{
		printf("\n Overflow");
	}
	else
	{
		int element;
		printf("\nEnter element");
		scanf("%d",&element);
		stack[top++]=element;
	}
}
void pop()
{
	if(top==-1)
	printf("\nUnderflow");
	else
	top--;
	stack[top]=0;
	printf("\nElement has been popped");
}
void display()
{
	if(top==0)
	printf("\nStack is empty");
	else
	{
		int i;
		for(i=0;i<top;i++)
		printf("%d ",stack[i]);
		printf("\nTop= ",top-1);
		printf("top element is %d ",stack[top-1]);
	}
}
