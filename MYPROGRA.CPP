#include<stdio.h>
#include<time.h>
void main()
{
int ch, ele;
empty();
while(1)
{
printf("\n 1 add at beg");
printf("\n 2 add at last");
printf("\n 3 delete from beg");
printf("\n 4 delete from last");
printf("\n 5 Display");
printf("\n 6 Exit");
printf("\n Enter your choice");
scanf("%d", ch);
switch(ch)
{
case 1:
printf("\n Enter an element");
scanf("%d",&ele);
add_at_beg(ele);
break;
case 2:
printf("\n Enter an element");
scanf("%d",&ele);
add_at_last(ele);
break;
case 3:
delete_from_beg();
break;
case 4:
delete_from_last();
break;
case 5:
display();
break;
case 6:
exit(0);
break;
default:
printf("\n Invalid Input");
}}}