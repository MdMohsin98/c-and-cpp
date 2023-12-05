 /* A C Programme to Calculate Simple Interest*/
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int t;
 float p,r,si;
 clrscr();
 printf("\n Entrer the value of P, R and T:");
 scanf("%f%f%d",&p,&r,&t);
 si=(p*r*t)/100;
 printf("Simple Interest=%.2f",si);
 getch();
 }