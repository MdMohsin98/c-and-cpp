/* A C Programme to Define the given no. is odd or even*/
#include<stdio.h>
void even();
void odd();
void main()
{
int n;
printf("\n========================================\n");
printf("\n Enter Any No. ");
scanf("%d", &n);
if(n%2==0)
even();
else
odd();
}
void even()
{
printf("\n Number is Even ");
return;
}
void odd()
{
printf("\n Number is Odd ");
return;
}