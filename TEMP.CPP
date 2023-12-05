/* A C++ Programme to find the Average Temperature of five Sunny Days */
#include<iostream.h>
#include<conio.h>
void average(int a, int b, int c, int d, int e, int f)
{
	a = (b+c+d+e+f)/5;
	cout<<"\n The Average Temperature is = "<<a;
}
void main()
{
	int a,b,c,d,e,f;
	clrscr();
	cout<<"\n Enter The Temperature of Five Sunny Days ";
	cin>>b>>c>>d>>e>>f;
	average(a,b,c,d,e,f);
	getch();
}