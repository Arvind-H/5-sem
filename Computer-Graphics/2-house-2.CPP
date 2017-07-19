#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
void house();
void star();
void star_del();
void line_t(int ,int , int ,int);
void moon();
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
line_t(50,100,150,200);
int maxx=getmaxx(),maxy=getmaxy();
printf("%d %d",maxx,maxy);
setbkcolor(DARKGRAY);
house();

moon();
star();
/*
delay(500);
star_del();
outtextxy(200,400,"Now, Let the sun rise...");
delay(1000);
star_del();
setbkcolor(CYAN);
setcolor(BLACK);
delay(2000);
setbkcolor(LIGHTRED);
setcolor(BROWN);
  */
getch();
closegraph();
return 0;
}


void house()
{
line_t(100,100,50,200);
line_t(100,100,150,200);
line_t(100,100,400,100);
line_t(400,100,450,200);
rectangle(50,200,150,300);
rectangle(150,200,450,300);
rectangle(75,230,125,300);
rectangle(200,220,240,260);
rectangle(350,220,390,260);

}
void moon()
{
 fillellipse(500,50,50,50);
}
void star()
{       int x,y;
for(int i=0;i<100;i++){
 for(int j=0;j<5;j++){
	x=random(600);
	y=random(90);
	putpixel(x,y,WHITE);
  }
  delay(100);
  for(int k=0;k<50;k++){
	x=random(600);
	y=random(90);
	putpixel(x,y,BLACK);
   }
 }
}

void star_del()
{
cleardevice();
house();
circle(500,50,50);

}

void line_t(int x1,int y1,int x2,int y2)
{
  int x=x1,y=y1;
  float dx=(x2-x1), dy=(y2-y1);
  float step;
  if(dx>=dy)
	step=dx;
  else
	step=dy;

  float xinc=(float)dx/step;
  float  yinc=(float)dy/step;

 for(int i=0;i<step;i++)
 {
	putpixel(x,y,WHITE);
	delay(20);
	x=x+xinc;
	y=y+yinc;
 }
}