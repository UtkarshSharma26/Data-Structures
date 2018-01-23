#include<stdio.h>
#include<conio.h>
void ins(int a[],int n);
int main()
{
	int i,n,a[10];
	printf("no. of elements");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	ins(a,n);
	printf("sorted array ");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
}
void ins(int a[],int n)
{
	int i,j,t;
	for(i=1;i<n;i++)
	{
		t=a[i];
		j=i-1;
		while((t<a[j])&&(j>=0))
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=t;
	}	
}	
