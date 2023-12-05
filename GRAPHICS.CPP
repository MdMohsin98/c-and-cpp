#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc");
settextstyle(1,0,10);
settextjustify(0,2);
outtextxy(10,2,"Hello");
settextjustify(2,3);
settextstyle(3,1,5);
outtextxy(14,150,"Hello");
getche();
closegraph();
restorecrtmode();
}