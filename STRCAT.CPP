 /*Programmes of String Functions */
 /* An Example of strcat(string) function */
 #include<stdio.h>
 #include<string.h>
 void main()
 {
 char name[20],name1[20];
 printf("\n Enter First String");
 gets(name);
 printf("\n Enter 2nd String");
 gets(name1);
 strcat(name,name1);
 printf("\n String=%s",name);
 }
