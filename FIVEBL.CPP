#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;
int x1,y1,x2,y2,x,y,dx,dy,p;
initgraph(&gd,&gm,"c:\\turboc3\\BGI");
printf("enter values of (x1,y1) \n");
scanf("%d%d",&x1,&y1);
printf("enter values of (x2,y2)\n");
scanf("%d%d",&x2,&y2);
dx=x2-x1;
dy=y2-y1;
x=x1;
y=y1;
p=2*dx-dy;
while(y<y2)
{
putpixel(x,y,RED);
y--;
if(p<0)
{
p=p+2*dx;
}
else
{
x++;
p=p+2*dx-2*dy;
}
delay(50);
}
getch();
closegraph();
}