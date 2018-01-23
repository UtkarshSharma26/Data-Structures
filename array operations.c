#include<stdio.h>
#include<conio.h>
int a[10],c,n,i,p,e,d,s;
void create();
void del();
void ins();
void search();
void display();
int main()
{
	int c;
	printf("\n1.Create\n2.Insert\n3.Delete\n4.Search\n5.Display\n6.Exit\n");
	do
	{
		printf("Choice is ");
		scanf("%d",&c);
		switch(c)
		{
			case 1: create();break;
			case 2: ins();break;
			case 3: del();break;
			case 4: search();break;
			case 5: display();break;
			case 6: exit(0);break;
			default: printf("\nInvalid choice");
		}
	}while(c!=6);
	return 0;
}
void create()
{
	printf("\nEnter the no. of elements ");
	scanf("%d",&n);
	printf("\nEnter elements ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void display()
{
	printf("\nThe array is ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
void ins()
{
	printf("\nEnter the position to insert element ");
	scanf("%d",&p);
	printf("\nEnter the element ");
	scanf("%d",&e);
	for(i=n-1;i>=p;i--)
	{
		a[i+1]=a[i];
	}
	a[p]=e;
	n=n+1;
}
void del()
{
	printf("\nEnter the position to delete ");
	scanf("%d",&d);
	e=a[d];
	for(i=p;i<=n-1;i++)
	{
		a[i]=a[i+1];
	}
	n=n-1;
	printf("\nThe deleted element is %d ",e);
}
void search()
{
	printf("\nThe element to be searched ");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
		{
			printf("\nThe element is searched at position %d ",i+1);
			break;
		}
	}
	if(i==n)
	{
		printf("\nThe Element was not found\n");
	}
}
