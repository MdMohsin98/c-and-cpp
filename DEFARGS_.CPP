			/* Default Arguments */
#include<iostream.h>
#include<conio.h>
void main()
{
	int a=4, b=7, c=3, d=5;
	int sum(int a=5, int b=8, int c=10, int d=20);
	clrscr();
	cout<<"\n Sum = "<<sum();
	cout<<"\n Sum = "<<sum(12);
	cout<<"\n Sum = "<<sum(10,20);
	cout<<"\n Sum = "<<sum(10,20,30);
	cout<<"\n Sum = "<<sum(10,20,30,40);
	getch();
}
int sum(int x, int y, int z, int p)
{
	return(x+y+z+p);
}