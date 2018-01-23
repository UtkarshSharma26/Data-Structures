#include<stdio.h>
#include<string.h>
#include<math.h>
int top;
char stack[30];
int isp(char c)
{
int t;
switch(c)
{
case '^': t=3; break;
case '/':
case '*': t=2; break;
case '+':
case '-': t=1; break;
case '(': t=0; break;
default : c=1;
}
return(t);
}
int icp(char c)
{
int t;
switch(c)
{
case '^': t=4; break;
case '/':
case '*': t=2; break;
case '+':
case '-': t=1; break;
case '(': t=4; break;
}
return(t);
}
int main()
{
int j=0,i,l;
char c,r,p[20]={" "},g[20];
printf("Enter the InFix Expression : ");
gets(g);
l=strlen(g);
g[l]=')'; g[l+1]='$'; top++;
stack[top]='(';
for(i=0;g[i]!='$';i++)
{
c=g[i];
if((c>='a' && c<='z') || (c>=0 && c<=9)) { j++; p[j]=c; }
else if(c=='(') { top++; stack[top]=c; }
else if(c==')')
{do
{
r=stack[top];
top--;
p[++j]=r;
}while(stack[top]!='(');
top--;
}
else
{
while(icp(c)<=isp(stack[top]))
{
r=stack[top];
top--;
p[++j]=r;
}
stack[++top]=c;
}
}
printf("The PostFix Expression is : ");
puts(p);
return 0;;
}

