/* Factorial */
#include<iostream.h>
#include<conio.h>
void main()
{
	int a, b, c=1;
	cout<<"\n Enter Any No. ";
	cin>>b;
	for(a=1;a<=b;a++)
	c = c*a;
	cout<<"\n Factorial = "<<c;
	getch();
}
