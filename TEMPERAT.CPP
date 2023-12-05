/* A C++ Programme to convert the Celsius into Farhenheit */
#include<iostream.h>
#include<conio.h>
void change(float a, float b)
{
	a = ((b-32)*5)/9; //Where a is temperature in Celsius and b is in Farenheit.
	cout<<"\n The "<<b <<" Deg. Farenheit is = "<<a <<" Deg. Celsius ";

}
void main()
{
	float a, b;
	cout<<"\n Enter The Temperature in Farenheit :";
	cin>>b;
	change(a, b);
	getch();
}