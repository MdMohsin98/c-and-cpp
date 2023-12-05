#include<stdio.h>
void add-at-beg(int ele)
{
Node *ptr;
ptr = (Node *)malloc(sizeof (Node));
ptr -> info=ele;
ptr ->prev=NULL;
if (head==NULL && tail==NULL)
{
ptr -> next=NULL;
head = tail = ptr;
return;
}
ptr -> next = head;
ptr -> next -> prev = ptr;
head  = ptr;
return;
};