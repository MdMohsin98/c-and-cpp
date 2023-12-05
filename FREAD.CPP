/* A C Programme to define the example of fread() function*/
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
//char ch='y';
st std;
fptr=fopen("Student.dat","rb");
if(fptr==NULL)
{
printf("\n File Open Error");
return;
}
while(!feof(fptr))
{
fread(&std,sizeof(std),1,fptr);
printf("\nName=%s",std.name);
//gets(std.name);
printf("\n Roll=%d & Marks=%f",std.roll,std.marks);
//scanf("%d%f",&std.roll,&std.marks);
//fwrite(&std,sizeof(std),1,fptr);
//fflush(stdin);
//printf("\n Add more record Y/N");
//scanf("%c",&ch);
}
fclose(fptr);
}