/* A C Programme to define the example of fwrite() function*/
#include<stdio.h>
typedef struct student
{
char name[20];
int roll;
float marks;
}st;
void main()
{
FILE *fptr;
char ch='y';
st std;
fptr=fopen("Student.dat","wb");
if(fptr==NULL)
{
printf("\n File Open Error");
return;
}
while(ch=='y'||ch=='y')
{
fflush(stdin);
printf("\n Enter Name");
gets(std.name);
printf("\n Enter Roll & Marks");
scanf("%d%f",&std.roll,&std.marks);
fwrite(&std,sizeof(std),1,fptr);
fflush(stdin);
printf("\n Add more record Y/N");
scanf("%c",&ch);
}
fclose(fptr);
}