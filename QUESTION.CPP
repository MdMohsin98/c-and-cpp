#include<stdio.h>
void main()
{
int a,b,c;
printf("\n Enter any three integer");
scanf("%d%d%d",&a,&b,&c);
if(a>b & a>c)
{
if(b>c)
printf("\n %d,%d,%d",c,b,a);
else
printf("\n %d,%d,%d",b,c,a);
}
else if(b>a && b>c)
{
if(a>c)
printf("%d,%d,%d",c,a,b);
else
printf("%d,%d,%d",a,c,b);
}
else
{
if(a>b)
printf("%d,%d,%d",b,a,c);
else
printf("%d,%d,%d",a,b,c);
}
}