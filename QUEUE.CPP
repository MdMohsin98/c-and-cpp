 #include<stdio.h>
 #define MAX 10
 int Queue[MAX];
 int front,rear;
 void Empty()
 {
 front=rear=-1;
 return;
 }
 void Enqueue(int ele)
 {
 if(rear==MAX)
 {
 printf("\n Queue is overflow");
 return;
 }
 if(rear==-1)
 front=rear=0;
 else
 rear++;
 Queue[rear]=ele;
 return;
 }
 void Dequeue()
 {
 if(front==-1||front>rear)
 {
 printf("\n Queue is underflow");
 return;
 }
 printf("\n %d element is dequeued",Queue[front]);
 ++front;
 return;
 }
 void display()
 {
 if(front==-1||front>rear)
 {
 printf("\n Queue is underflow");
 return;
 }
 for(i=front;i<=rear;i++)
 {
 printf("%d<=",Queue[i]);
 }
 return;
 }
 void main()
 {
 int ch,ele;
 Empty();
 while(1)
 {
 printf("\n 1 Enqueue");
 printf("\n 2 Dequeue");
 printf("\n 3 Display");
 printf("\n 4 Exit");
 scanf("%d", &ch);
 switch(ch)
 {
 case 1:
 printf("\n Enter Element");
 scanf("%d",&ele);
 Enqueue(ele);
 break;
 case 2:
 Dequeue();
 break;
 case 3:
 display();
 break;
 case 4:
 exit(0);
 break;
 default;
 printf("\n Invalid Input");
 }}}