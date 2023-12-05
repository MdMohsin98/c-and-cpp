/* A C Programme to Structure for an Employee*/
#include<stdio.h>
struct Student
{
char name[20];
char address[30];
int roll;
};
void main()
{
struct Student st;
printf("\n Enter Name");
gets(st.name);
printf("\n Enter Address");
gets(st.address);
printf("\n Enter Roll");
scanf("%d", &st.roll);
printf("\n Information \n");
printf("\n Name=%s", st.name);
printf("\n Address=%s", st.roll);
printf("\n Roll=%d", st.roll);
}
