/*  A C++ Programme to calculate the sum by the help of Friend Function */
#include<iostream.h>
#include<conio.h>
class ab
{
	int a, b;
	public:
	ab()
	{
		a=b=0;
	       //	cout<<"\n Enter The Value for A and B ";
	       //	cin>>a>>b;
	}
	ab(int x, int y)
	{
		a=x;
		b=y;
	}
	void disp()
	{
		cout<<"\n A = "<<a<<", B = "<<b<<endl;
	}
};
void main()
{
	ab p, q(10,20);
	clrscr();
	p.disp();
	q.disp();
	getch();
}