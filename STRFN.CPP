/* A C Programme to print the details of 'n' employees */
#include<stdio.h>
#include<conio.h>
typedef struct employee;
{
int empid;
char *nm;
int age;
long basicsal;
}emp;
void main()
{
int n,i;
emp[100];
clrscr;
l:printf("\n Enter the total no. of records(upto 100):");
scanf("%d",&n);
if(n>100)
goto l;
printf("\n Enter %d records one by one :\n",n);
for(i=0;i<n;i++)
{
printf(" Employee ID:");
scanf("%d",&emp[i].empid);
fflush(stdin);
printf("Name:");
gets(emp[i].nm);
fflush(stdin);
printf("Age:");
scanf("%d", &emp[i].age);
fflush(stdin);
printf("Basic Salary : ");
scanf("%ld",&emp[i].basicsal);
fflush(stdin);
}
printf("\n Emp. ID\tName\tAge\tBasic Salary");
printf("\n========================================");
for(i=0;i<n;i++)
{
printf("\n %d\t%s\t%d\t%ld", emp[i].empid,e[i].nm,e[i].age,e[i].basicsal);
}
printf("\n =======================================");
getch();
}