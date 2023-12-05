/* An Example of Nested Structure*/
#include<stdio.h>
struct Student
{
char name[20];
char address[30];
int roll;
struct DOB
{
int dd;
int mm;
int yy;
}db;
};
void main()
{
struct Student st;
printf("\n Enter Name and Address");
gets(st.name);
gets(st.address);
printf("\n Enter Roll No.");
scanf("%d", &st.roll);
printf("\n Enter DOB(dd/mm/yy)");
scanf("%d%d%d", &st.db.dd,&st.db.mm,&st.db.yy);
printf("\n Name=%s", st.name);
printf("\n Address=%s",st.address);
printf("\n Roll=%d", st.roll);
printf("\n DOB=%d/%d/%d", st.db.dd,st.db.mm,st.db.yy);
}