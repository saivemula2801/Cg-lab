#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>

void main()
{
int x,y,mx,my,r,p;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\BGI");
setbkcolor(RED);
printf("drawing circle by midpoint algorithm \n");
printf("enter the coordinates");
scanf("%d%d",&mx,&my);
printf("enter radius of circle");
scanf("%d",&r);
x=0;
y=r;
p=1-r;
while(x<y)
{
putpixel(mx+x,my+y,BLUE);
putpixel(mx+y,my+x,BLUE);
putpixel(mx-y,my+x,BLUE);
putpixel(mx-x,my+y,BLUE);
putpixel(mx-x,my-y,BLUE);
putpixel(mx-y,my-x,BLUE);
putpixel(mx+y,my-x,BLUE);
putpixel(mx+x,my-y,BLUE);

if(p<0)
{
p=p+(2*x)+1;
}
else
{
y=y-1;
p=p+(2*x)-(2*y)+1;
}
x=x+1;
delay(100);
}
getch();
}