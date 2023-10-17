#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
struct node
{
int data;
struct node *next;
};
struct node *top=NULL;
int count=0;
struct node *temp;
void display()
{
struct node *temp=top;
if(count==0)
{
printf("stact is empty\n");
return;
}
else{
printf("There are currently %d items\n",count);
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
printf("\n");
}}
void push(int el)
{
struct node *temp=(struct node*)malloc(sizeof(struct node));
if(temp==NULL)
{
printf("memory allocation failed\n");
return;
}
temp->data=el;
temp->next=top;
top=temp;
count++;
display();
}
void pop()
{
if(count==0)
{
printf("stack is empty\n");
return;
}
temp=top;
top=top->next;
printf("item to be removed is %d\n",temp->data);
free(temp);
count--;
display();
}
void search()
{
int item,flag=0,position=1;
printf("enter search element\n");
scanf("%d",&item);
if(top==NULL)
{
printf("stack is underflow\n");
return;
}
temp=top;
while(temp!=NULL)
{
if(temp->data==item)
{
flag=1;
printf("element %d found at position %d\n",item,position);
break;
}
else
{
temp=temp->next;
position++;
}}
if(flag==0)
{
printf("element %d not found\n",item);
}}
void main()
{
int choice,element;
clrscr();
while(1)
{
printf("STACK OPERATIONS\n");
printf("1.Push\n2.Pop\n3.Display\n4.Search\n5.exit\n\nEnter Your Choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("enter element to insert(push)=\n");
scanf("%d",&element);
push(element);
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:search();
break;
case 5:
exit(0);
break;
default:
printf("\nEnter Valid option\n");
}}}
