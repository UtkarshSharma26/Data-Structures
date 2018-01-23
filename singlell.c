#include<stdio.h>
#include<stdlib.h>
struct node                            
{
int data;
struct node *next;
};
struct node *start;
void insertbeg(void)
{
struct node *nn;
int a;
nn=(struct node *)malloc(sizeof(struct node));
printf("enter data:");
scanf("%d",&nn);
a=nn->data;
if(start==NULL)                          
{
nn->next=NULL;
start=nn;
}
else
{
nn->next=start;
start=nn;
}
printf("%d succ. inserted\n",a);
return;
}
void insertend(void)
{
struct node *nn,*lp;int b;
nn=(struct node *)malloc(sizeof(struct node));
printf("enter data:");
scanf("%d",&nn->data);
b=nn->data;
if(start==NULL)
{
nn->next=NULL;
start=nn;
}
else
{
lp=start;
while(lp->next!=NULL)
{
lp=lp->next;
}
lp->next=nn;
nn->next=NULL;
}
printf("%d is succ. inserted\n",b);
return;
}
void insertmid(void)
{
struct node *nn,*temp,*ptemp;int x,v;
nn=(struct node *)malloc(sizeof(struct node));
if(start==NULL)
{
printf("sll is empty\n"); return;
}
printf("enter data before which no. is to be inserted:\n");
scanf("%d",&x);
if(x==start->data)
{
insertbeg();
return;
}
ptemp=start;
temp=start->next;
while(temp!=NULL&&temp->data!=x)
{
ptemp=temp;
temp=temp->next;
}
if(temp==NULL)
{
printf("%d data does not exist\n",x);
}
else
{
printf("enter data:");
scanf("%d",&nn->data);
v=nn->data;
ptemp->next=nn;
nn->next=temp;
printf("%d succ. inserted\n",v);
}
return;
}
void deletion(void)
{
struct node *pt,*t;
int x;
if(start==NULL)
{
printf("sll is empty\n");
return;
}
printf("enter data to be deleted:");
scanf("%d",&x);
if(x==start->data)
{
t=start;
start=start->next;
free(t);
printf("%d is succ. deleted\n",x);
return;
}
pt=start;
t=start->next;
while(t!=NULL&&t->data!=x)
{
pt=t;t=t->next;
}
if(t==NULL)
{
printf("%d does not exist\n",x);return;
}
else
{
pt->next=t->next;
}
printf("%d is succ. deleted\n",x);
free(t);
return;
}
void display(void)
{
struct node *temp;
if(start==NULL)
{
printf("sll is empty\n");
return;
}
printf("elements are:\n");
temp=start;
while(temp!=NULL)
{
printf("%d\n",temp->data);
temp=temp->next;
}
return;
}
void main()
{
int c,a;    start=NULL;
do
{
printf("1:insert\n2:delete\n3:display\n4:exit\nenter choice:");
scanf("%d",&c);
switch(c)
{
case 1:
printf("1:insertbeg\n2:insert end\n3:insert mid\nenter choice:");
scanf("%d",&a);
switch(a)
{
case 1:insertbeg();break;
case 2:insertend();break;
case 3:insertmid();break;
}
break;
case 2:deletion();break;
case 3:display();break;
case 4:printf("program ends\n");break;
default:printf("wrong choice\n");
break;
}
}
while(c!=4);
}
