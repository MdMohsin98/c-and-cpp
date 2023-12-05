/* A C Programme to define the example of "Address Argument" */
#include<stdio.h>
void test(int a, int b)
{
printf("\n A=%d\n B=%d",a,b);
a=20;
b=30;
return;
}
void main()
{
int x, y;
printf("\n Enter any two integer");
scanf("%d%d", &x, &y);
test(x,y);
printf("\n X=%d\n Y=%d",x,y);
}