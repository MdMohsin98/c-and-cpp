// Call By Value
/*#include<iostream.h>
#include<conio.h>
void change(int a)
{
	a=20;
	cout<<endl<<"In function:A="<<a;
}
void main()
{
	int a=10;
	clrscr();
	cout<<"Before function call:A="<<a;
	change(a);
	cout<<endl<<"After function call:A="<<a;
	getch();
}
// Call By Address
#include<iostream.h>
#include<conio.h>
void change(int *a)
{
	*a=20;
	cout<<endl<<"In function:A="<<*a;
}
void main()
{
	int a=10;
	clrscr();
	cout<<"Before function call:A="<<a;
	change(&a);
	cout<<endl<<"After function call:A="<<a;
	getch();
} */

//Call by Reference:
#include<iostream.h>
#include<conio.h>
void change(int &x)
{
	x=20;
	cout<<endl<<"In function:A="<<x;
}
void main()
{
	int a=10;
	clrscr();
	cout<<"Before function call:A="<<a;
	change(a);
	cout<<endl<<"After function call:A="<<a;
	getch();
}