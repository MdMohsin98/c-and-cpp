/* A C Programme for the example of "No Argument No Return" type*/
#include<stdio.h>
void even();
void odd();
void main()
{
int n;
printf("\n Enter Any Number");
scanf("%d", &n);
if(n%2==0)
even();
else
odd();
}
void even()
{
printf("\n Number is even");
return;
}
void odd()
{
printf("\n Number is odd");
return;
}