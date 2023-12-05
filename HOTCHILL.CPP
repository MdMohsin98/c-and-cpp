/* A C Programme to Print The DA, TA, HRA, BS and Grand Total Of an Employee*/
#include<stdio.h>
#include<stdlib.h>
struct Employee
{
char name[20];
char address[30];
int jobid;
int da;
int ta;
int hra;
int bs;
};
struct Employee mm;
void main()
{
int gt=0;
fflush(stdin);
printf("\n Enter Name and Address");
gets(mm.name);
gets(mm.address);
fflush(stdin);
printf("\n Enter the Job Id\tDA\tTA\tHRA\tBasic Salary ");
scanf("%d%d%d%d%d",&mm.jobid, &mm.da, &mm.ta, &mm.hra, &mm.bs);
printf("\n-------------------------------------------------------\n");
printf("\n Employee Name = %c", &mm.name);
printf("\n Address = %c", &mm.address);
printf("\n Job Id = %d", &mm.jobid);
printf("\n DA = %d", &mm.da);
printf("\n TA = %d", &mm.ta);
printf("\n HRA = %d", &mm.hra);
printf("\n Basic Salary = %d", &mm.bs);
gt= mm.da+mm.ta+mm.hra+mm.bs;
printf("\n Grand Total = %d", &gt);
printf("\n--------------------------------------------------------\n");
}