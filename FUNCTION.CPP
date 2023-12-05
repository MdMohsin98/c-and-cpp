/* A C Programme to pass array with the help of array */
#include<stdio.h>
void show(int *p, int n)
{
int i;
for(i=0;i<n;i++)
{
printf("%d", *(p+i));
}
return;
}
void main()
{
int a[100],n,i;
printf("\n Enter Total No. of elements");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n Enter Element");
scanf("%d", &a[i]);
show(&a[0],n);
}
}