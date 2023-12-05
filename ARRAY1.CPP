/* The First Programme of Array */
#include<stdio.h>
void main()
{
int a[100],n,i;
printf("\n Enter Total No. of Elements");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n Enter Element");
scanf("%d",& a[i]);
}
printf("\n Elements are \n");
for(i=0;i<n;i++)
printf("%d",a[i]);
}