#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
#include<math.h>
float round(float a);
void dda(int x1,int y1,int x2,int y2)
{
int steps,k;
float xincrmt,yincrmt,x,y,dx,dy;

dx=x2-x1;
dy=y2-y1;
if(abs(dx)>abs(dy))
{
steps=abs(dx);
}
else
{
steps=abs(dy);
}
xincrmt=dx/steps;
yincrmt=dy/steps;
x=x1;
y=y1;
for(k=1;k<=steps;k++)
{
delay(10);
x+=xincrmt;
y+=yincrmt;
putpixel(round(x),round(y),RED);
}
outtextxy(300,30,"DDA");
outtextxy(x1+7,y1-7,"(x1,y1)");
outtextxy(x2+7,y2+7,"(x2,y2)");

}
void main()
{
int x1,y1,x2,y2;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\BGI");
printf("enter values of(x1,y1)");
scanf("%d%d",&x1,&y1);
printf("enter the values of(x2,y2)");
scanf("%d%d",&x2,&y2);
dda(x1,y1,x2,y2);
getch();
closegraph();
}

float round(float a)
{
int b=a+1;
return b;
}

