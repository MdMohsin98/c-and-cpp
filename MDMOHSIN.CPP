/* A C Programme to define the example of "With Argument With Return" Type */
#include<stdio.h>
long int factorial(int);
void main()
{
int n;
long int r;
printf("\n Enter any number");
scanf("%d",&n);
r=factorial(n);
printf("\n Factorial of %d=%ld",n,r);
}
long int factorial(int n)
{
int i;
long int f=1;
for(i=1;i<=n;i++)
f=f*i;
return(f);
}