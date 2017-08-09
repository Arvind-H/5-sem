#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
int i; 
for(i=10;i<200;i++)
{
  putpixel(i,100,WHITE);
  delay(30);
}
getch();
cleardevice();
closegraph();
return 0;
}