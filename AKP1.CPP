#include<iostream.h>
#include<conio.h>
void check(int a, int b, int c)
{
if(a>b&&a>c)
cout<<"The Greatest No. is: "<<a;
if(b>c&&b>a)
cout<<"The Greatest No. is: "<<b;
if(c>a&&c>b)
cout<<"The Greatest No. is: "<<c;
}
void main()
{
int a,b,c;
clrscr();
cout<<"Enter the value for A, B and C ";
cin>>a>>b>>c;
check(a,b,c);
getch();
}