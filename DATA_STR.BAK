/* The first C Programme of Data Structure */
#include<stdio.h>
#include<stdlib.h>

typedef struct slink
{
int info ;
struct slink *next;
}node;
Node *head;
void empty()
{
head=NULL;
return;
}
void add_at_beg(int ele)
{
Node *ptr;
ptr=(Node *) malloc(sizeof(Node));
ptr->info=ele;
if(head==NULL)
{
ptr->next=NULL;
head=ptr;
return;
}
ptr-> next=head;
head=ptr;
return;
}
void display()
{
Node *ptr;
if(head==NULL)
{
printf("\n Linked list is empty");
return;
}
ptr=head;
while(ptr!=NULL)
{
printf("%d=>",ptr->info);
ptr=ptr->next;
}
return;
}
void main()
{
int ele, ch;
empty();
while(1)
{
printf("\n 1 Add Node");
printf("\n 2 Display");
printf("\n 3 Exit");
printf("\n Enter your choice");
scanf("%d", &ch);
switch(ch)
{
case 1:
printf("\n Enter Element");
scanf("%d",&ele);
add_at_beg(ele);
break;
case 2:
display();
break;
case 3:
exit(0);
break;
default:
printf("\n Invalid Input");
}
}
}