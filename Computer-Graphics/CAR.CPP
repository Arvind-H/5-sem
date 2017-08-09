#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
void carr(int i);
void backGround();

int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
for(int i=0;i<600;i++)
{
  cleardevice();
  backGround();
  carr(i);
  delay(15);

}
getch();
cleardevice();
closegraph();

return 0;
}

void carr(int i)
{
 //Car body
 line(i+100,150,i+75,200);  //1
 line(i+75,200,i+50,200);   //2
 line(i+50,200,i+50,260);   //3
 line(i+50,260,i+100,260);  //4
 arc(i+130,260,0,180,30);   //5
 line(i+160,260,i+220,260); //6
 arc(i+250,260,0,180,30);   //7
 line(i+280,260,i+370,260); //8
 line(i+370,260,i+370,210); //9
 line(i+370,210,i+280,200); //10
 line(i+280,200,i+260,150); //11
 line(i+260,150,i+100,150); //12
 //Tyres
 circle(i+130,270,25);	    //13
 circle(i+250,270,25);	    //14
 //Front window
 line(i+260,200,i+250,165); //15
 line(i+250,165,i+200,160); //16
 line(i+200,160,i+200,200); //17
 line(i+200,200,i+260,200); //18
 //Rear window
 line(i+170,200,i+170,160); //19
 line(i+170,160,i+120,160); //20
 line(i+120,160,i+100,200); //21
 line(i+100,200,i+170,200); //22



}

void backGround()
{ //Road
  line(0,120,650,120);
  line(0,350,650,350);
/*  //Dividers
  for(int j=0;j<6;j++){
   int c = j*100;
   rectangle(c+10,225,c+70,245);
   }
 */
  //Bridge Arches
  arc(100,120,0,180,100);
  arc(300,120,0,180,100);
  arc(500,120,0,180,100);
  arc(700,120,0,180,100);

  arc(100,350,0,180,100);
  arc(300,350,0,180,100);
  arc(500,350,0,180,100);
  arc(700,350,0,180,100);
 }