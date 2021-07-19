#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
#include<conio.h>
void drawline(int x1,int y1,int x2,int y2);
void main()
{
int gd=DETECT,gm;
int x1,x2,y1,y2;

printf("enter value of(x1,y1)");
scanf("%d%d",&x1,&y1);
printf("enter value of (x2,y2)");
scanf("%d%d",&x2,&y2);
initgraph(&gd,&gm,"c:\\turboc3\\BGI");
drawline(x1,y1,x2,y2);
getch();
closegraph();
}
void drawline(int x1,int y1,int x2,int y2)
{
int dx,dy,dp,x,y;
dx=x2-x1;
dy=y2-y1;
x=x1;
y=y1;
dp=2*dy-dx;
while(x<x2)
{
if(dp>=0)
{
delay(20);
putpixel(x,y,RED);
y=y-1;
dp=dp+2*dy-2*dx;
}
else
{
delay(10);
putpixel(x,y,RED);
dp=dp+2*dy;
}
x=x+1;
}

}