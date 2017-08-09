#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
void main()
{
int gd=0,gm;
int xr=300,yr=300,x1=250,y1=250,x2=150,y2=300,x3=250,y3=300;
int i,g=1;
double r;
initgraph(&gd,&gm," ");
r=(double)((3.14* g)/180);
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);

for(i=200;i<700;i++)
{
setcolor(i);

x1=xr+((x1-xr)*cos(r)-(y1-yr)*sin(r));
y1=yr+((x1-xr)*sin(r)+(y1-yr)*cos(r));

x2=xr+((x2-xr)*cos(r)-(y2-yr)*sin(r));
y2=yr+((x2-xr)*sin(r)+(y2-yr)*cos(r));

x3=xr+((x3-xr)*cos(r)-(y3-yr)*sin(r));
y3=yr+((x3-xr)*sin(r)+(y3-yr)*cos(r));



line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);

delay(100);
}
//cleardevice();
closegraph();

getch();
}