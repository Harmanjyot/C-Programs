#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<process.h>
void main()
{
int x=100,y=100,r=10,ch, gdriver=DETECT, gmode;
initgraph(&gdriver,&gmode,"C:\\TurboC3\\BGI");
while(1)
{
 circle(x,y,r);
 if(kbhit())
  {
   ch=getch();
   if(ch==119)
   {
    y=y-3;
    }
   if(ch==97)
   {
    x=x-3;

    }
   if(ch==115)
   {
    y=y+3;
    }
   if(ch==100)
   {
    x=x+3;
   }
   if(ch==27)
    exit(0);
   }
  delay(10);
  cleardevice();
  }

}