/* A C Programme to Calculate the Addition and Multiplication process*/
#include<stdio.h>
#include<math.h>
void main()
{
signed int a,b,c,d,s=0,m=0;
printf("\n==========================================\n");
printf("\n Enter values for a,b,c,d ");
scanf("%d%d%d%d", &a,&b,&c,&d);
s=0;m=0;
s=a+b+c+d;
m=a*b*c*d;
printf("\n==========================================\n");
{printf("\n Sum = %d", &s);}
{printf("\n Multiplication = %d\n",&m);}
}
