	/* A C Prtogramme to generate Fibonacci Series*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a=0, b=1, c=0, n;
printf("\n==================================\n");
printf("\n Enter the value of n ");
scanf("%d",&n);
while(c<=n)
{
printf("%d\t",c);
a=b;
b=c;
c=a+b;
}
getch();
}