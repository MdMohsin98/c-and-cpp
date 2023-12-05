 /*Programmes of String Functions */
 /* An Example of strlwr(string) function */
 #include<stdio.h>
 #include<string.h>
 void main()
 {
 char name[20];
 printf("\n Enter Any String");
 gets(name);
 printf("\n String=%s", name);
 printf("\n String1=%s",strlwr(name));
 }
