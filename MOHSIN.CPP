/* A C Programme to Print the name, address, employee id, da, ta, hra, bs
and grand total of an employee*/
#include<stdio.h>
struct Employee
{
char name[20];
char add[30];
int id;
int da;
int ta;
int hra;
int bs;
}emp;
struct Employee ee;
void main()
{
printf("\n Enter Name: ");
gets(ee.name);
printf("\n Enter Address: ");
gets(ee.add);
printf("\n Enter Employee ID, DA, TA, HRA and Basic Salary of an employee");
scanf("%d%d%d%d%d",&ee.id, &ee.da, &ee.ta, &ee.hra, &ee.bs);
printf("\n==================================================");
printf("\n Name: = %s",ee.name);
printf("\n Address: = %s", ee.add);
printf("\n Employee ID: %d\nDA: %d\nTA: %d\nHRA: %d\nBasic Salary: %d", ee.id, ee.da, ee.ta, ee.hra, ee.bs);
printf("\n Grand Total = %d",ee.da+ee.ta+ee.hra+ee.bs);
printf("\n==================================================");
}