/* This Programme is Created by Md.Mohsin Ansari*/
/* A C Programme to Print the Self Biodata*/
#include<stdio.h>
#include<stdlib.h>
struct Mohsin
{
char name[20];
char fname[20];
char cname[30];
char course[10];
char address[30];
int roll[3];
int contact[11];
struct DOB
{
long int dd[2];
long int mm[2];
long int yy[4];
}db;
};
struct Mohsin mm;
void main()
{
printf("\n===============================================\n");
printf("\n Enter Name, Father's Name, Class Name, Course Name, Address ");
gets(mm.name);
gets(mm.fname);
gets(mm.cname);
gets(mm.address);
fflush(stdin);
printf("\n Enter DOB ");
scanf("%d%d%d", &mm.db.dd,&mm.db.mm,&mm.db.yy);
printf("\n Enter Roll, Contact, ");
scanf("%d%d", &mm.roll,&mm.contact);
printf("\n===============================================\n");
printf("\n Name = %s ",mm.name);
printf("\n Father's Name = %s ",mm.fname);
printf("\n Class Name = %s ",mm.cname);
printf("\n Address = %s ",mm.address);
printf("\n DOB(dd/mm/yy) = %d/%d/%d ",&mm.db.dd,&mm.db.mm,&mm.db.yy);
printf("\n Roll = %d ",mm.roll);
printf("\n Contact = %d ",mm.contact);
}