/* A C++ Programme to calculate the factorial of a given no. */
#include<iostream.h>
#include"conio.h"
long int fact(int n)
{
long int f=1;
int i;
for(i=1;i<=n;i++)
f=f*i;
return(f);
}
void main()
{
int n;
long int f;
clrscr();
cout<<"Enter any number : ";
cin>>n;
f=fact(n)
cout <<endl<<"The factorial of << n <<" is << f;
getch();
}