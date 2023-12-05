/* A C Programme for the example of "With Argument No Return" type*/
#include<stdio.h>
void table(int);
void main()
{
int n;
/*n=input();
if(n>0)
positive();
else if(n<0)
negative();
else
zero();
}
int input()
{
int x;*/
printf("\n Enter Any Number");
scanf("%d", &n);
/*return(x);
}
void positive()
{ */
table(n);
}
void table(int n)
{
int i;
for(i=1;i<=10;i++)
{
printf("\n%d",n*i);
}
/*printf("\n Number is positive");
return;
}
void negative()
{
printf("\n Number is Negative");
return;
}
void zero()
{
printf("\n No. is Zero");*/
return;
}