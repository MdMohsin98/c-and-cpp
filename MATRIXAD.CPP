/* A C Programme to input m*n matrix and to calculate their sum row wise */
#include<stdio.h>
void main()
{
int a[10][10],i,j,m,n,s;
printf("\n Enter order of matrix");
scanf("%d%d", &m,&n);
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("\n Enter Elements");
scanf("%d", &a[i][j]);
}
}
printf("\n Elements Are \n");
for(i=0;i<m;i++)
{
s=0;
for(j=0;j<n;j++)
{
printf("%d", a[i][j]);
s = a[i][j];
}
printf("=%d\n",s);
}
}