 /* A C++ Programme to print the table for any No. */
 #include<iostream.h>
 #include<conio.h>
 #include<math.h>
 void check(int a, int b, int c)
 {
	for(a=1;a<=10;a++)
	{
		c=b*a;
		cout<<"\n "<<b <<" X "<<a <<" = " <<c;
	}
 }
 void main()
 {
	int a,b,c;
	clrscr();
	cout<<"\n Enter Any No.: ";
	cin>>b;
	check(a,b,c);
	getch();
 }