#include<stdio.h>
#include<conio.h>
void main()
{
int m,n,r,t;
printf("\n Enter the value for m and n (m>n)");
scanf("%d%d",&m,&n);
t=m*n;
for(r=m%n;r!=0;r=m%n);
{
m=n;
n=r;
}
printf("\n LCM=%d",t/n);
}