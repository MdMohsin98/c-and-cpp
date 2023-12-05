/* A C Programme to Struct for an Employee*/
/* It Contains Employee Name, Address, Employee No., Basic Salary, DA, TA,
and HRA and Total Salary*/
#include<stdio.h>
struct Employee
{
char name[20];
char address[30];
int eno;
int bs;
int da;
int ta;
int hra;
};
void main()
{
struct Employee st;
printf("\n Enter Name & Address");
gets(st.name);
gets(st.address);
printf("\n Enter E No., BS, DA, TA & HRA");
scanf("%d%d%d%d%d", &st.eno, &st.bs, &st.da, &st.ta, &st.hra);
printf("\n Name=%s", st.name);
printf("\n Address=%s", st.address);
printf("\n Employee No.=%d", st.eno);
printf("\n BS=%d,DA=%d,TA=%d,HRA=%d", st.bs, st.da, st.ta, st.hra);
printf("\n Total Salary=%d", st.bs+st.da+st.ta+st.hra);
}
