#include<stdio.h>
void main()
{
File *fptr;
char str[60],ch='y';
fptr=fopen("Myfile.Txt","w");
if(fptr==NULL)
{
printf("\n File open error");
return;
}
while(ch=='y'||ch=='y');
{
printf("\n Enter String");
gets(str);
fputs(str,fptr);
printf("\n Add more strings Y/N");
ch=getchar();
}
fclose(fptr);
}