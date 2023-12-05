/* A C++ Programme to find the Total Amount of Following Jobs */
#include<iostream.h>
#include<conio.h>
void amount(int a, int b, int c, float d)
{       if(d==1)
	{
		a = 20; // For 1 Hour Internet Browsing.
		cout<<"\n The Total Amount Of Browsing = "<<a<<"Rs.";
	}
	else if(d==1/2)
	{
		b = a/2; //For 1/2 Hour Browsing.
		cout<<"\n The Total Amount Of Browsing = "<<b<<"Rs";
	}
	else
	{
		c = 90;
		cout<<"\n The Total Amount of Browsing = "<<c<<"Rs.";
	}
}
void main()
{
	int a, b, c;
	float d;
	clrscr();
	cout<<"\n Enter The Time in Hours ";
	cin>>d;
	amount(a,b,c,d);
	getch();
}