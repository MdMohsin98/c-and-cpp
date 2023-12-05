/* A C++ Programme to check the Supplied No. is Even or Odd */
#include<iostream.h>
#include<conio.h>
void check(int a)
{
	if(a%2==0)
	cout<<"\n The Supplied No. is Even";
	else
	cout<<"\n The Supplied No. is Odd";
}
void main()
{
	int a;
	cout<<"\n Enter Any Number ";
	cin>>a;
	check(a);
	getch();
}