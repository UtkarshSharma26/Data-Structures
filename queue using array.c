#include<stdio.h>
#include<stdlib.h>
#define max 50
int q[max],f=0,r=0;
void eq();
void dq();
void disp();
int main()
{
	int c;
	printf("\n1.Enqueue\n2.Deueue\n3.Display\n4.Exit\n");
	do
	{
		printf("\nChoice is ");
		scanf("%d",&c);
		switch(c)
		{
			case 1: eq();break;
			case 2: dq();break;
			case 3: disp();break;
			case 4: exit(0);break;
			default: printf("\nInvalid choice");
		}
	}while(c!=5);
	return 0;
}
void eq()
{
	int element;
	if(r==max)
	printf("Overflow");
	else
	{
		printf("\nEnter the element ");
		scanf("%d",&element);
		q[r++]=element;
	}
}
void dq()
{
	if(r==f)
	printf("\nUnderflow");
	else
	f++;
}
void disp()
{
	int i;
	if(f==r)
	printf("\nqueue is empty");
	else
	printf("\nfront= %d",q[f]);
	printf("\nqueue= ");
	for(i=f;i<r;i++)
	{
		printf("%d ",q[i]);
	}
}
