/* A C Programme to print the total salary of an Employee by Union*/
#include<stdio.h>
union Employee
{
char name[20];
char address[30];
signed int da;
signed int ta;
signed int hra;
signed int bs;
signed int gt;
};
void main()
{
union Employee em;
printf("\n Enter Name and Address ");
gets(em.name);
gets(em.address);
printf("\n Enter the DA, TA, HRA and BS ");
scanf("%d%d%d%d", em.da,em.ta,em.hra,em.bs);
printf("\n DA=%d ",&em.da);
printf("\n TA=%d ", &em.ta);
printf("\n HRA=%d ", &em.hra);
printf("\n Basic Salary=%d ", &em.bs);
printf("\n Grand Total=%d ",em.da+em.ta+em.hra+em.bs);
}
