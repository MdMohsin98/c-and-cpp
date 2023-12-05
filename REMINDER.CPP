 /* A C++ Programme to find the Reminder of a number devised by 2, 3, 4 */
 #include<iostream.h>
 #include<conio.h>
 #include<math.h>
 void check(int a, int b, int c, int d)
 {
	b = a%2;
	cout<<"\n The Reminder is "<<b <<" When deviding by 2 ";
	c = a%3;
	cout<<"\n The Reminder is " <<c <<" When deviding by 3 ";
	d = a%4;
	cout<<"\n The Reminder is "<<d <<" When deviding by 4 ";
 }
 void main()
 {
	int a,b,c,d;
	clrscr();
	cout<<"\n Enter Any No.: ";
	cin>>a;
	check(a,b,c,d);
	getch();
 }