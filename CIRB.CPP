#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>

void drawcircle(int x1,int y1,int x,int y)
{
putpixel(x1+x,y1+y,RED);
putpixel(x1-x,y1+y,RED);
putpixel(x1+x,y1-y,RED);
putpixel(x1-x,y1-y,RED);
putpixel(x1+y,y1+x,RED);
putpixel(x1-y,y1+x,RED);
putpixel(x1+y,y1-x,RED);
putpixel(x1-y,y1-x,RED);
}
void cirbre(int x1,int y1,int r)
{
int x=0;
int y=r;
int d=3-2*r;
drawcircle(x1,y1,x,y);
while(x<=y)
{
x++;
if(d>0)
{
y--;
d=d+4*(x-y)+10;
}
else
{
d=d+(4*x)+6;
}
drawcircle(x1,y1,x,y);
delay(100);
}
}
void main()
{
int x1,y1,r;
printf("enter center of circle ");
scanf("%d%d",&x1,&y1);
printf("enter radius of circle");
scanf("%d",&r);
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\BGI");
setbkcolor(GREEN);
cirbre(x1,y1,r);
}