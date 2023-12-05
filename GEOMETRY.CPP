/* A C++ Programme to find the Area and Perimeter of a Square and Rectangle */
#include<iostream.h>
#include<conio.h>
void square(int a, int x, int y)
{
	x = a*a;
	cout<<"\n\t\t    The Area of Square is : "<<x <<"\n";
	y = 4*a;
	cout<<"\n\t\t    The Perimeter of Square is : "<<y <<"\n";
}
void rect(int l, int b, int p, int q)
{
	p = l*b;
	cout<<"\n\t\t        The Area of Rectangle is : "<<p <<"\n";
	q = 2*(l+b);
	cout<<"\n\t\t        The Perimeter of Rectangle is : "<<q <<"\n";
}
void main()
{
	 int a, x, y, l, b, p, q;
	 clrscr();
	 cout<<"\n\t\t Enter The Length of One Side of a Square :";
	 cin>>a;
	 square(a,x,y);
	 cout<<"\n\t\t Enter the length and height of a Rectangle :";
	 cin>>l>>b;
	 rect(l,b,p,q);
	 getch();
}



