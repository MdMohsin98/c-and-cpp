/* The First Programme of Pointers*/
/* A C Programme input any two integer and to interchange or swap their Value*/
#include<stdio.h>
void main()
{
int a,b,*p,*q;
p=&a;
q=&b;
printf("\n Enter the value for a & b");
scanf("%d%d",&a,&b);
printf("\n A=%d\t B=%d",*p,*q);
*p = *p + *q;
*q = *p - *q;
*p = *p - *q;
printf("\n After Swaping A = %d \tB=%d",*p,*q);
}