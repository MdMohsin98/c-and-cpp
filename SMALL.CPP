 /* A C++ Programme to find the Smallest No. between two given Nos. */
 #include<iostream.h>
 #include<conio.h>
 void small(int a, int b)
 {
	if(a<b)
	cout<<"\n The given No." <<a <<" is Smaller than "<<b;
	if(b<a)
	cout<<"\n The given No. "<<b <<" is Smaller than "<<a;
 }
 void main()
 {
	int a,b;
	clrscr();
	cout<<"\n Enter Two Nos. ";
	cin>>a>>b;
	small(a,b);
	getch();
 }