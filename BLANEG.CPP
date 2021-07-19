#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
#include<conio.h>
void main()
{
int gd=DETECT,gm;
int x1,x2,y1,y2,x,y,dp,dx,dy;

printf("enter value of(x1,y1)");
scanf("%d%d",&x1,&y1);
printf("enter value of (x2,y2)");
scanf("%d%d",&x2,&y2);
initgraph(&gd,&gm,"c:\\turboc3\\BGI");
dx=x2-x1;
dy=y2-y1;
x=x1;
y=y1;
dp=2*dy-dx;
while(x<x2)
{
x++;
if(dp<0)
{
dp=dp+2*dy;
}
else
{
y=y+1;
dp=dp+2*dy-2*dx;
}
delay(10);
putpixel(x,y,RED);
}
getch();
closegraph();
}