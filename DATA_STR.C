#include<stdio.h>
#include<stdlib.h>
#define MAX 20
int DQ[MAX];
int front==rear==-1
void add_at_beg(int ele)
{
if(front==-1)
{
printf("\n Deque is empty");
return;
}
if(front>0)
{
DQ[--front]=ele;
}
else
printf("\n Insertion Not Possible");
return;
}
void add_at_last(int ele)
{
if(rear==-1)
{
front=rear=0;
DQ[rear]=ele;
return;
}
if(rear==Max-1)
printf("\n DQ is full");
return;
}
{
++rear;
DQ[rear]=ele;
return;
}