/* Passing Structure to the Function*/
#include<stdio.h>
#include<conio.h>
typedef struct student
{
char name[20];
int roll;
float marks;
}std;
void display(std s)
{
printf("\n Name=%s", s.name);
printf("\n Roll=%d", s.roll);
printf("\n Marks=%f", s.marks);
return;
}
void main()
{
std st;
printf("\n Enter Name ");
gets(st.name);
printf("\n Enter Roll and Marks ");
scanf("%d%f",st.roll,&st.marks);
display(st);
}