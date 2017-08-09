#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>

void b_line(int x1, int y1, int x2, int y2); 
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"");

b_line(100,100,200,200);
b_line(100,200,300,100);
b_line(200,150,400,250);
getch();
cleardevice();
closegraph();

return 0;
}

void b_line(int x0, int y0, int xn, int yn)
{
 int dx,dy,p;
// float m=dy/dx;
 int x,y;
 putpixel(x,y,BLUE);
  
   dx=abs(xn-x0);
   dy=abs(yn-y0);
   x=x0;y=y0;

if(dx>=dy)
{ p=2*dy-dx;
   if(x0>xn)
   {
     x0=xn; y0=yn;
     xn=x; yn=y;
     x=x0; y=y0;
   }

 while(x<xn)
 { x++;
   if(p<0)
   p+=2*x*dy;
   else
   {
    if(y>yn)
	y--;
    else
	y++;
    p+=2*(dy-dx);
   }
  putpixel(x,y,BLUE);
  delay(30);
 }
}

else
{
   p=2*dx-dy;
   if(y0>yn)
   { 
     x0=xn; y0=yn;
     xn=x; yn=y;
     x=x0; y=yn;
   }
  
  
 while(y<yn)
 { y++;
   if(p<0)
   p+=2*y*dx;
   else
   {
    if(x>xn)
	x--;
    else
	x++;
    p+=2*(dx-dy);
   }
  putpixel(x,y,WHITE);
  delay(50);
  }
 }
}