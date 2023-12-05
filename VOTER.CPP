/* A C++ Programme to check the Voter */
#include<iostream.h>
#include<conio.h>
void change(int a)
{
	if(a>=18)
	cout<<"\n\n\t\t\t The Voter is Eligible";
	else
	cout<<"\n\n\t\t\t The Voter is Not Eligible ";

}
void main()
{
	int a;
	clrscr();
	cout<<"\n Enter The Age of Voter : d";
	cin>>a;
	change(a);
	getch();
}