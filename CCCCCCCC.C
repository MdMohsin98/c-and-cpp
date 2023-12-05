#include<stdio.h>
void main()
{
int a[10][10], b[10][10], c[10][10], i,j,m,n,p,q;
printf("\n Enter order of first matrix");
scanf("%d%d", &m,&n);
printf("\n Enter order of 2nd matrix");
scanf("%d%d", &p,&q);
if(m==p && n==q)
{
printf("\n Enter elements of first matrix");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("\n Enter element");
scanf("%d", &a[i][j]);
}
}
printf("\n Enter order of 2nd matrix ");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
printf("\n Enter Elements");
scanf("%d", &b[i][j]);
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
c[i][j] = a[i][j] + b[i][j];
}
}
printf("\n 1st matrix \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d", a[i][j]);
}
printf("\n");
}
printf("\n 2nd Matrix");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
printf("%d", b[i][j]);
}
printf("\n");
}
printf("\n Result");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d", c[i][j]);
}
printf("\n");
}
}
else
printf("\n Addition Not Possible");
}