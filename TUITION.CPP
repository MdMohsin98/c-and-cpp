/* A C++ Programme to the Create the Data Structure of Linked List */
#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<alloc.h>
struct book
	{
	char bnm[20];
	int pr,pg;
	book *link;
	}
*top=NULL;
void push();
void pop();
void display();
void main()
	{
	int ch;
	while(1)
		{
		clrscr();
		cout<<" 1 - Push\n";
		cout<<" 2 - Pop\n";
		cout<<" 3 - Display\n";
		cout<<" 4 - Exit\n";
		cout<<" Enter your choice - ";
		cin>>ch;
		switch(ch)
			{
			case 1: push(); break;
			case 2: pop(); break;
			case 3: display(); break;
			case 4: exit(0);
			default : cout<<" Invalid Choice";
			}
		getch();
		}
	}
void push()
	{
	book *temp;
	temp = (book *)malloc(sizeof(book));
	cout<<" Enter Book Name - ";
	cin>>temp->bnm;
	cout<<"Enter Book Price";
	cin>>temp->pr;
	cout<<"Enter Page";
	cin>>temp->pg;
	temp->link=NULL;
	if(top==NULL);
	top=temp;
	else
		{
		temp->link=top;
		top=temp;
		}
	}
void pop()
	{
	book *temp;
	if(top==NULL)
	cout<<"Stack is Empty";
	else if(top->link==NULL)
		{
		free(top);
		top=NULL;
		}
	else
		{
		temp=top;
		top=top->link;
		temp->link=NULL;
		free(temp);
		}
	}