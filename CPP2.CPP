/* A C++ Programme to find the Area and Perimeter of a Rectangle */
#include<iostream.h>
#include<conio.h>
void rect(int a, int p, int l, int b)
{
	a = l*b;
	cout<<"\n Area = "<<a<<" meter square.\n";
	p = 2*(l+b);
	cout<<"\n Perimeter = "<<p<<" meter.\n";
}
void main()
{
	int a, p, l, b;
	clrscr();
	cout<<"\n Enter The Value of l and b(in meter): ";
	cin>>l>>b;
	rect(a,p, l, b);
	getch();
}
