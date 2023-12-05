/*  A C++ Programme to calculate the sum by the help of Friend Function */
#include<iostream.h>
#include<conio.h>
class ab
{
	int a, b;
	public:
	void setvalues(int x, int y)
	{
		a=x;
		b=y;
		cout<<"\n Enter The Value for A and B ";
		cin>>a>>b;
	}
	void disp()
	{
		cout<<"\n A = "<<a<<", B = "<<b<<endl;
	}
	friend int sum(ab);
};
int sum(ab p)
{
	return(p.a+p.b);
}
void main()
{
	int a, b;
	ab x;
	clrscr();
	x.setvalues(a,b);
	x.disp();
	cout<<"\n Sum = "<<sum(x);
	getch();
}