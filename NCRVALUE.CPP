#include<stdio.h>
long int factorial(int);
void main()
{
int n,r;
long int fn, fr, fnr;
printf("\n Enter the value for n and r");
scanf("%d%d", &n,&r);
fn=factorial(n);
fr=factorial(r);
fnr=factorial(n-r);
printf("\n NCR=%ld", fn/(fnr*fr));
}
long int factorial(int n)
{
int i;
long int f=1;
for(i=1;i<=n;i++)
f=f*i;
return(f);
}