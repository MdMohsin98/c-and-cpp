/*********************************************************/
/*       Calculating The Average Age of n Ages           */
/*********************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
float age, s= 0.0, avg;
clrscr();
printf("\n Enter total number of students");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n Enter Age");
scanf("%f",& age);
s=s+age;
}
avg= s/n;
printf("\n Average Age =%f",avg);
}