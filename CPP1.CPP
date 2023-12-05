/* A C++ Programme to check whether the supplied no. is divisible by 7 & 3 or not */
#include<iostream.h>
#include<conio.h>
void check(int a)
{
	if(a%7==0)
	cout<<"\n The Supplied No. is divisible by 7\n";
	if(a%3==0)
	cout<<"\n The Supplied No. is divisible by 3\n";
	if(a%7==0 && a%3==0)
	cout<<"\n The Supplied No. is divisible by 7 & 3";
}
void main()
{
	int a;
	clrscr();
	cout<<"\n Enter Any No. : ";
	cin>>a;
	check(a);
	getch();
}