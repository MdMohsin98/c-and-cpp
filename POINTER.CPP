/* A C Programme to Calculate the area of a circle */
#include<stdio.h>
void main()
{
int r,*p;
float ar,*q;
p=&r;
q=&ar;
printf("\n Enter the value of r");
scanf("%d",&r);
ar=3.14* (*p)*(*p);
printf("\n Area=%f",*q);
}