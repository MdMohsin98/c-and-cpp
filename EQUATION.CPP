/* A C++ Programme to Calculate the Given Equations */
#include<iostream.h>
#include<conio.h>
void calculate(int x, int x1, int x2, int x3, int y2, int z3, int a, int b)
{
	a = x2+(2*x3)*(2*x);//Equation A
	cout<<"\n\t\t     The Solution of Equation A is = "<<a<<"\n\n";
	b = x1+y2+z3;       //Equation B
	cout<<"\n\t\t     The Solution of Equation B is = "<<b <<"\n\n";
}
void main()
{
	int x, x1, x2, x3, y2, z3, a, b;
	clrscr();
	cout<<"\n Enter The Values for x, x1, x2, x3, y2, z3 \n";
	cin>>x>>x1>>x2>>x3>>y2>>z3;
	calculate(x,x1,x2,x3,y2,z3,a,b);
	getch();
}