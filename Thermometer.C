#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
body();
temp(int);
int main()
{
int gd=DETECT,gm,choice, cel=0, fa=0;
initgraph(&gd,&gm,"C://TURBOC3//BGI");
printf("Select the system:\n 1. Celcius\n 2. Farenheit\n");
scanf("%d",&choice);

switch(choice)
 {
 case 1:
 printf("Enter the temperature\n");
 scanf("%d",&cel);
 fa= (cel*9/5)+32;
 printf("%d C= %d F",cel,fa);
 body();
 temp(cel);
 break;
 case 2:
 printf("Enter the temperature\n");
 scanf("%d",&fa);
 cel= (fa-32)*5/9;
 body();
 printf("%d F = %d C",fa,cel);
 temp(cel);
 break;
 default:
 printf("!ERROR!");
 }
getch();
clrscr();
cleardevice();
return 0;
}

temp(c)               //rise in mercury
{
int i,x1=300,y1=350,y2=y1,x2=290,X1=295,X2=295,Y1=370,Y2=370;
float limit;
limit=(c+40)*2.8;
setcolor(RED);
for(i=1;i<=10;i++)
 {
 delay(50);
 line(X1,Y1,X2,Y2);
 X1=X1-1;
 X2=X2+1;
 Y1=Y1-1;
 Y2=Y1;
 }
for(i=1;i<=10;i++)
 {
 delay(50);
 line(X1,Y1,X2,Y2);
 X1++;
 X2--;
 Y1--;
 Y2--;
 }

delay(100);
for(i=1;i<=limit;i++)
 {
 delay(25);
 line(x1,y1,x2,y2);
 y1--;
 y2=y1;
 if(i>=266)
  {
  break;
  }
 }

if(c>50)
 {
 for(i=1;i<=5;i++)
  {
  delay(50);
  line(x1,y1,x2,y2);
  x1--;
  x2++;
  y1--;
  y2--;
  }
 }
return 0;
}

body()
{
arc(295,80,0,180,60);
line(235,80,235,350);
arc(295,350,180,360,60);
line(355,80,355,350);
circle(295,360,10);
line(300,85,300,350);
line(290,85,290,350);
arc(295,85,0,180,5);
outtextxy(323,90,"50__");      /*celsius caliberation*/
outtextxy(348,100,"_");
outtextxy(348,108,"_");
outtextxy(323,118,"40__");
outtextxy(348,128,"_");
outtextxy(348,136,"_");
outtextxy(323,146,"30__");
outtextxy(348,156,"_");
outtextxy(348,164,"_");
outtextxy(323,174,"20__");
outtextxy(348,184,"_");
outtextxy(348,192,"_");
outtextxy(323,202,"10__");
outtextxy(348,212,"_");
outtextxy(348,220,"_");
outtextxy(332,230,"0__");
outtextxy(348,240,"_");
outtextxy(348,248,"_");
outtextxy(316,258,"-10__");
outtextxy(348,268,"_");
outtextxy(348,276,"_");
outtextxy(316,286,"-20__");
outtextxy(348,296,"_");
outtextxy(348,304,"_");
outtextxy(316,314,"-30__");
outtextxy(348,324,"_");
outtextxy(348,332,"_");
outtextxy(316,342,"-40__");
outtextxy(235,94,"__ 120");      /*fahrenheit caliberation*/
outtextxy(235,105,"_");
outtextxy(235,116,"_");
outtextxy(235,128,"__ 100");
outtextxy(235,137,"_");
outtextxy(235,146,"_");
outtextxy(235,156,"__ 80");
outtextxy(235,165,"_");
outtextxy(235,174,"_");
outtextxy(235,184,"__ 60");
outtextxy(235,194,"_");
outtextxy(235,205,"_");
outtextxy(235,216,"__ 40");
outtextxy(235,225,"_");
outtextxy(235,234,"_");
outtextxy(235,244,"__ 20");
outtextxy(235,254,"_");
outtextxy(235,264,"_");
outtextxy(235,276,"__ 0");
outtextxy(235,285,"_");
outtextxy(235,294,"_");
outtextxy(235,304,"__ -20");
outtextxy(235,316,"_");
outtextxy(235,328,"_");
outtextxy(235,342,"__ -40");
outtextxy(270,60,"F");
outtextxy(320,60,"C");
return 0;
}
