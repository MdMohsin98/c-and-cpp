#include<stdio.h>
void main()
{
long int n;
printf("\n Enter any AI");
scanf("%ld", &n);
if(n>=300000 &n<500000)
{
printf("I.Tax=%f",n*.1);
}
else if(n>=500000)
printf("\n I.Tax=%f",n*.15);
else
printf("\n I.Tax=0");
}