/* A C++ Programme to check the Blood Donor */
#include<iostream.h>
#include<conio.h>
void change(int a)
{
	if(a>18 && a<=55)
	cout<<"\n The Blood Donator is Eligible (Weight Should be Greater Than 45 KG.) ";
	else
	cout<<"\n The Blood Donator is Not Eligible  (Weight Should be Greater than 45 KG) ";

}
void main()
{
	int a;
	clrscr();
	cout<<"\n Enter The Age of Blood Donator :";
	cin>>a;
	change(a);
	getch();
}