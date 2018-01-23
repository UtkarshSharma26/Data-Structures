#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
struct node *left ;
char data ;
struct node *right ;
} ;
struct node *root;
struct node * buildtree(int);
//char arr[ ] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', '\0', '\0', 'H' } ;
//int lc[ ] = { 1, 3, 5, -1, 9, -1, -1, -1, -1, -1 } ;
//int rc[ ] = { 2, 4, 6, -1, -1, -1, -1, -1, -1, -1 } ;
void display();
int main( )
{
int ch;
do
{
printf("1. Create.......\n");
printf("2. Display......\n");
printf("3. Exit.......\n");
printf("enter your choice(1..3)\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
root = buildtree(0);
break;
case 2:
display();
break;
default :
break;
}getch();
} while(ch != 3);}
void display()
{void inorder(struct node *);
void preorder(struct node *);
void postorder(struct node *);
int ch;
do
{
printf("1. Inorder.......\n");
printf("2. Preorder......\n");
printf("3. Postorder.....\n");
printf("4. Exit..........\n");
printf("enter your choice(1...4)");
scanf("%d",&ch);
switch(ch)
{
case 1:
inorder(root);
break;
case 2:
preorder(root);
break;
case 3:
postorder(root);
break;
default :
break;
}
getch();
} while(ch !=4);
}
struct node *buildtree(int index)
{
struct node *temp = NULL;
if(index != -1)
{
temp=(struct node *)malloc(sizeof(struct node));
temp->left=buildtree(lc[index]);
temp->data=arr[index];
temp->right=buildtree(rc[index]);
}
return temp;
}
void inorder(struct node *root)
{
if(root != NULL)
{
inorder(root->left);
printf("%c\t", root->data);
inorder(root->right);
}
}

void preorder(struct node *root)
{
if(root != NULL)
{
printf("%c\t", root->data);
preorder(root->left);
preorder(root->right);
}
}
void postorder(struct node *root)
{if(root != NULL){
preorder(root->left);
postorder(root->right);
printf("%c\t",root->data);
}
}
