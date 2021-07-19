#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<dos.h>

void sp(int x,int y,int h,int k)
{
putpixel(x+h,y+k,RED);
putpixel(-x+h,y+k,RED);
putpixel(x+h,-y+k,RED);
putpixel(-y+h,x+k,RED);
putpixel(y+h,-x+k,RED);
putpixel(y+h,x+k,RED);
putpixel(-x+h,-y+k,RED);
putpixel(-y+h,-x+k,RED);
}

void main()
{
int gd=DETECT,gm;
int h,k,r;
double x,y,p;
initgraph(&gd,&gm,"c:\\turboc3\\BGI");
setbkcolor(BLUE);
printf("enter the coordinates to draw circle");
scanf("%d%d",&h,&k);
printf("enter the radius of circle");
scanf("%d",&r);
setbkcolor(WHITE);
x=0;
y=r;
p=r/sqrt(2);
while(x<=p)
{
y=sqrt(r*r - x*x);
sp(floor(x),floor(y),h,k);
x++;
delay(100);
}
getch();
closegraph();
}