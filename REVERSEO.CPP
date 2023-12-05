/*Reverse Order*/
#include<stdio.h>
void main()
{
int n,r,b=0;
printf("\n enter any no.");
scanf("%d",&n);
l:
r=n%10;
b=b*10+r;
n=n/10;
if(n>0)
goto l;
printf("\n No.=%d",b);
}