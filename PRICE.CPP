/* A C++ Programme to find the Total Amount of Following Jobs */
#include<iostream.h>
#include<conio.h>
void amount(int a, int b, int c)
{       if(c<=10)
	{
		a = 5*c; //For a Passport Photo
		cout<<"\n The Total Amount Of Scanning & Hard Copy = "<<a;
	}
	else
	{
		b = 3*c; //For more than 10 Photos
		cout<<"\n The Total Amount Of Scanning & Hard Copy = "<<b;
	}
}
void main()
{
	int a, b, c;
	clrscr();
	cout<<"\n Enter The Amount of Pages ";
	cin>>c;
	amount(a,b,c);
	getch();
}