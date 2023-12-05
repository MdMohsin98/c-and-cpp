 /* A C Programme to Calculate Area and Circumference */
 #include<stdio.h>
 #include<conio.h>
 #define PI 3.141
 void main()
 {
 float r,ar,cir;
 clrscr();
 printf("Radius= ");
 scanf("%f",&r);
 ar=PI*r*r;
 cir=2*PI*r;
 printf("Area=%.2f",ar);
 printf("\n Circumferenc =%.2f",cir);
 getch();
 }