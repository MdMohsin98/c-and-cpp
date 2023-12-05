/* A C++ Programme to add the two numbers. */
#include<iostream.h>
#include<conio.h>
int sum(int a, int b)
{
int c;
c=a+b;
return(c);
}
void main()
{
int x,y,z;
int sum(int a, int b);
clrscr();
cout<<"Enter two numbers :";
cin>>x>>y;
z=sum(x,y);
cout<<"\n Sum="<<z;
getch();
}