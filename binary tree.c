#include<malloc.h>
#include<stdio.h>
#include<conio.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *tree;
void cre(struct node *);
struct node *ins(struct node *,int);
void pre(struct node *);
void in(struct node *);
void post(struct node *);

int main()
{
	int c,val;
	struct node *ptr;
	cretree(tree);
	printf("1.Insert\n2.Pre\n3.In\n4.Post");
	do{
		printf("\nchoice ");
		scanf("%d",&c);
		switch(c)
		{
			case 1: printf("\nVal of node ");
					scanf("%d",&val);
					tree=ins(tree,val);break;
			case 2: printf("\nElements are ");
					pre(tree);break;
			case 3: printf("\nElements are ");
					in(tree);break;		
			case 4: printf("\nElements are ");
					post(tree);break;				
		}
	}while(c!=5);
	return 0;
}
void cre(struct node *tree)
{
	tree=NULL;
}
struct node *ins(struct node *tree,int val)
{
	struct node *ptr,*nodeptr,*parentptr;
	ptr=(struct node *)malloc(sizeof(struct node));
	ptr->data=val;
	ptr->left=NULL;
	ptr->right=NULL;
	if(tree=NULL)
	{
		tree=ptr;
		tree->left=NULL;
		tree->right=NULL;
	}else
	{
		parentptr=NULL;
		nodeptr=tree;
		while(nodeptr!=NULL)
		{
			parentptr=nodeptr;
			if(val<nodeptr->data)
			nodeptr=nodeptr->left;
			else
			nodeptr=nodeptr->right;
		}if(val<parentptr->data)
		 parentptr->left=ptr;
		 else
		 parentptr->right=ptr;
	}
	return tree;
}
void pre(struct node *tree)
{
	if(tree!=NULL)
	{
		printf("%d\t,tree->data");
		pre(tree->left);
		pre(tree->right);
	}
}
void in(struct node *tree)
{
	if(tree!=NULL)
	{
		pre(tree->left);
		printf("%d\t,tree->data");
		pre(tree->right);
	}
}
void post(struct node *tree)
{
	if(tree!=NULL)
	{
		pre(tree->left);
		pre(tree->right);
		printf("%d\t,tree->data");
	}
}
