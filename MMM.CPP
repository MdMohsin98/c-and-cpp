/* A C Programme to demonstrate wrapping around */
#include<stdio.h>
#include<conio.h>
void main()
{
volatile int x;
volatile const int y=10;
clrscr;
printf("Enter an integer:");
scanf("%d",&x);
printf("Enterd integer is :%d",x);
printf("\nValue of y:%d",y);
/* y=8; */
getche();
}