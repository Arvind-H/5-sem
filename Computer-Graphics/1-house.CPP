#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
void house();
void star();
void star_del();

int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
int maxx=getmaxx(),maxy=getmaxy();
printf("%d %d",maxx,maxy);
setbkcolor(DARKGRAY);
house();

circle(500,50,50);
star();
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

getch();
closegraph();
return 0;
}


void house()
{
line(100,100,50,200);
line(100,100,150,200);
line(100,100,400,100);
line(400,100,450,200);
rectangle(50,200,150,300);
rectangle(150,200,450,300);
rectangle(75,230,125,300);
rectangle(200,220,240,260);
rectangle(350,220,390,260);


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
