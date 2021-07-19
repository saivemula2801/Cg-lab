#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
#include<math.h>

void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
setbkcolor(BLUE);
int x1,y1,x2,y2,x,y,dx,dy,p;
printf("enter value of x1,y1");
scanf("%d%d",&x1,&y1);
printf("enter value of x2,y2");
scanf("%d%d",&x2,&y2);
outtextxy(220,150,"BLA WITH SLOPES POSITIVE AND GREATR THAN 1");
dx=(x2-x1);
dy=(y2-y1);
p=2*dx-dy;
x=x1;
y=y1;
while(x<x2)
{
putpixel(x,y,2);
y=y+1;
if(p>0)
{
p=p+2*dx-2*dy;
x=x+1;
}
else
{
p=p+2*dx ;
}
delay(50);
}
getch();
closegraph();
}