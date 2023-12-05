 /* The First C Programme*/
 /* A C Programme to sum the nos. by function method */
 #include<stdio.h>
 int sum(int, int);
 void main()
 {
 int a,b,c;
 printf("\n Enter the value for a & b ");
 scanf("%d%d", &a, &b);
 c=sum(a,b);
 printf("\n Sum=%d",c);
 }
 int sum(int x, int y)
 {
 return(x+y);
 }