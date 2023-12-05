/* A C++ Programme to find the Square and Cubes of Three No. */
#include<iostream.h>
#include<conio.h>
void abc(int a, int b, int c, int d, int e, int f, int g, int h, int i)
{
	d = a*a;
	e = a*a*a;
	cout<<"\n\t\t    The Square of "<<a <<" is : "<<d <<"\n";
	cout<<"\n\t\t    The Cube of "<<a <<" is : "<<e <<"\n";
	f = b*b;
	g = b*b*b;
	cout<<"\n\t\t    The Square of "<<b <<" is : "<<f <<"\n";
	cout<<"\n\t\t    The Cube of "<<b <<" is : "<<g <<"\n";
	h = c*c;
	i = c*c*c;
	cout<<"\n\t\t    The Square of "<<c <<" is : "<<h <<"\n";
	cout<<"\n\t\t    The Cube of "<<c <<" is : "<<i <<"\n";

}
void main()
{
	 int a, b, c, d, e, f, g, h, i;
	 clrscr();
	 cout<<"\n\t\t Enter Three Numbers :";
	 cin>>a>>b>>c;
	 abc(a,b,c,d,e,f,g,h,i);
	 getch();
}



