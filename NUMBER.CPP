/* A C++ Programme to print the no. of two digits */
#include<iostream.h>
#include<conio.h>
void print(int a)
{
	for(a=10;a<=99;a++)
	cout<<"\t"<<a;
}
void rev(int b)
{
	for(b=99;b>=10;b--)
	cout<<"\t"<<b;
}
void main()
{
	int  a,b;
	clrscr();
       //	cout<<"\n Enter The Starting Number :\n";
       //	cin>>a;
	cout<<"\n The Numbers in Common Order :\n";
	print(a);
	cout<<"\n The Numbers in Reverse Order :\n";
	rev(b);
	getch();
}