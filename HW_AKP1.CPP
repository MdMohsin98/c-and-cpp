/* A C++ Programme to find the Greatest No. between any two Nos. */
#include<iostream.h>
#include<conio.h>
void check(int a, int b)
{
	if(a>b)
	cout<<a;
	if(b>a)
	cout<<b;
}
void main()
{
int a,b;
clrscr();
cout<<" \n Enter Any Two No. : ";
cin>>a>>b;
cout<<" \n The Greater No. is : ";
check(a,b);
getch();
}