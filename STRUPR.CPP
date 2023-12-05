 /*Programmes of String Functions */
 /* An Example of strupr(string) function */
 #include<stdio.h>
 #include<string.h>
 void main()
 {
 char name[20];
 printf("\n Enter Any String");
 gets(name);
 printf("\n String=%s", name);
 printf("\n String1=%s",strupr(name));
 }
