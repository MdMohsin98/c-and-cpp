/*Creating HCF*/
#include<stdio.h>
void main()
{
int m,n,r;
printf("\ enter any two integer m,n(m>n)");
scanf("%d%d",&m,&m);
l:
r=m%n;
m=n;
n=r;
if(r!=0)
goto l;
printf("\n HCF=%d",m);
}