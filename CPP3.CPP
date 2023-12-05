/* A C++ Programme to find the Area and Circumference of a Circle */
#include<iostream.h>
#include<conio.h>
#define pi 3.141
void circle(float a, float c, int r)
{
	a = pi*r*r;
	cout<<"\n Area = "<<a<<" meter square.\n";
	c = 2*pi*r;
	cout<<"\n Circumference = "<<c<<" meter.\n";
}
void main()
{
	int r;
	float a, c;
	clrscr();
	cout<<"\n Enter The Value of Radius (in meter): ";
	cin>>r;
	circle(a,c, r);
	getch();
}
