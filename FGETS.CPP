#include<stdio.h>
void main()
{
File *fptr;
char str[60];
fptr=fopen("Myfile.Txt","r");
if(fptr==NULL)
{
printf("\n File open error");
return;
}
while(fgets(str,60,fptr)!=NULL)
{
printf("%s",str);
}
fclose(fptr);
}