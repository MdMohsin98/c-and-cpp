/* Printing Tables*/
#include<stdio.h>
void main()
{
int n, i=1;
printf("\n enter any no.");
scanf("%d",&n);
l:
printf("%d\t",n*i);
i++;
if(i<10)
goto l;
}