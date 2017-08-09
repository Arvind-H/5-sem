#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
void b_circle(int xc,int yc,int r,int color);
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
int i,x,y,c,r,x2,y2;
 b_circle(200,200,75,2);
 b_circle(300,200,50,3);
 b_circle(400,200,75,4);
 b_circle(250,250,50,5);
 b_circle(350,250,50,6);

/*
for(i=0;i<40;i++)
{ x= random(600);
  y= random(400);
  x2=random(50);
  y2=random(50);
  c=random(10);
  r=random(50);
  setcolor(c);
  circle(x,y,r);
  delay(300);
  rectangle(x,y,x+x2,y+y2);
}
*/
getch();
cleardevice();
closegraph();

return 0;
}

void b_circle(int xc,int yc,int r,int color)
{
 int x=0,y=r;
 int p= 1-r;
 while(y>0)
 {
  if(p<0)
  { x++;
    p=p+(2*x+1);
  }
  else
  { x++;
    y--;
    p=p+2*x+2*y+1;
  }
  putpixel(xc+x,yc+y,color);
  putpixel(xc-x,yc-y,color);
  putpixel(xc+x,yc-y,color);
  putpixel(xc-x,yc+y,color);
  delay(10);
  putpixel(xc+y,yc+x,color);
  putpixel(xc-y,yc-x,color);
  putpixel(xc+y,yc-x,color);
  putpixel(xc-y,yc+x,color);
  delay(20);
  }
}

