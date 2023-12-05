/* A C++ Programme to calculate the Simple Interest */
#include<iostream.h>
#include<conio.h>
void interest(float si, int p, float r, int t)
{
si = (p*r*t)/100;
cout<<" The Simple Interest = "<<si;
}
void main()
{
	int p, t;
	float si, r;
	clrscr();
	cout<<"\n Enter the value for Principle, Rate and Time : ";
	cin>>p>>r>>t;
	interest(si,p,r,t);
	getch();
}