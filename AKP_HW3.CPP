/* A C++ Programme to check the given no. is divisible by 7 & 3 or not */
#include<iostream.h>
#include<conio.h>
void check(int a)
{
if(a%3==0 && a%7==0)
cout<<"\n The Supplied No. is divisible by 3 ";
else
cout<<"\n The Supplied No. is Not divisible by 3";
if(a%7==0)
cout<<"\n The Supplied No. is divisible by 7";
else
cout<<"\n The Supplied No. is Not divisible by 7";
}
void main()
{
int a;
clrscr();
cout<<"\n Enter Any Number :";
cin>>a;
check(a);
getch();
}
