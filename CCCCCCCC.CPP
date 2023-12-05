/* A Structure programme to print the customers details */
#include<stdio.h>
union Customer
{
char nam[20];
char address[30];
char particulars[50];
int bill;
int tprice;
};
union Customer cc;
void main()
{
printf("\n===============================================\n");
printf("\n Enter Name & Address of the Customer ");
gets(cc.nam);
gets(cc.address);
printf("\n Enter the Particulrs ");
gets(cc.particulars);
printf("\n Enter the Bill No. ");
scanf("%d", &cc.bill);
printf("\n Enter the Total Price ");
scanf("%d", &cc.tprice);
printf("\n===============================================\n") ;
printf("\n Name = %c", cc.nam);
printf("\n Address = %c", cc.address);
printf("\n Particulars = %c", cc.particulars);
printf("\n Bill No. = %d", cc.bill);
printf("\n Total Price = %d", cc.tprice);
}