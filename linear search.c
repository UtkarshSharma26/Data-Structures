#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[10],i,n,c,f; 
	printf("no. of elements");
	scanf("%d",&c);
	printf("enter the nos.");
	for(i=0;i<c;i++)
	{
		scanf("%d",&a[c]);
	}
	printf("enter the no.to be searched");
	scanf("%d",&n);
	for(i=0;i<c;i++)
	{
		if(a[c]==n)
		{
			printf("found at%d",c);
		    break;
		}
		else
		{
				printf("not found");
				break;
		}
	}
	return 0;
}

