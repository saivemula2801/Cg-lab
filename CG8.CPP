#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
void main()
{
int x,y,r,h,k,theta,x1,y1;
float n=3.14159/180;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\BGI");
setbkcolor(RED);
printf("enter the coordinates");
scanf("%d%d",&h,&k);
printf("enter the radius of circle");
scanf("%d",&r);
for(theta=0;theta<=45;theta++)
{
x1=r*cos(theta*n);
y1=r*sin(theta*n);
x=int(x1+0.5);
y=int(y1+0.5);

putpixel(x+h,y+k,BLUE);
putpixel(x+h,-y+k,BLUE);
putpixel(-y+h,x+k,BLUE);
putpixel(-x+h,y+k,BLUE);
putpixel(y+h,-x+k,BLUE);
putpixel(-y+h,-x+k,BLUE);
putpixel(y+h,x+k,BLUE);
putpixel(-x+h,-y+k,BLUE);
delay(100);
}
getch();
closegraph();
}