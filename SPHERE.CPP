/* A C Programme To Calculate The Volume and Area of Surface of a Sphere*/
#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main()
{
float r,vol,ar;
clrscr();
printf("Radius= ");
scanf("%f",&r);
vol=4/3*PI*r*r*r;
ar=4*PI*r*r;
printf("Volume=%.2f",vol);
printf("\n Area Of Surface=%.2f",ar);
getch();
}