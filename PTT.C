#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
atomic_no();
element();
print_elements();
ptable();
void main()
{
int gdriver=DETECT, gmode,check;
clrscr();
initgraph(&gdriver, &gmode,"c://TURBOC3//BGI");
print_elements();
atomic_no();
ptable();
 printf("\n\nAre you searching for a particular element in the Periodic Table?\n 1.YES\n 2.NO\n");
 scanf("%d",&check);
 if(check==1)
 {
 clrscr();
 cleardevice();
 element();
 }
 else
 {
 return 0;
 }
getch();
return 0;
}
print_elements()
{
printf("\n\n    H\t\t\t\t\t\t\t\t       He");     //1
printf("\n\n\n    Li  Be \t\t\t\t\t     B  C   N   O   F  Ne"); //2
printf("\n\n\n    Na  Mg \t\t\t\t\t    Al  Si  P   S  Cl  Ar"); //3
printf("\n\n\n    K  Ca  Sc     Ti   V  Cr  Mn Fe  Co  Ni  Cu Zn  Ga  Ge  As Se  Br  Kr ");//4
printf("\n\n\n    Rb Sr  Y      Zr  Nb  Mo  Tc Ru  Rh  Pd  Ag  Cd In  Sn Sb  Te  I   Xe");//5
printf("\n\n\n    Cs Ba La-Lu   Hf  Ta  W   Re Os  Ir  Pt  Au  Hg Ti  Pb Bi  Po  At  Rn");//6
printf("\n\n\n    Fr Ra Ac-Lr   Rf  Db  Sg  Bh Hs  Mt  Ds  Rg  Cn Nh  Fl Mc  Lv  Ts  Og");//7
printf("\n\n\n\n\t   La  Ce Pr  Nd  Pm  Sm  Eu Gd  Tb  Dy  Ho  Er Tm Yb  Lu");
printf("\n\n\n\t   Ac  Th Pa  U   Np  Pu  Am Cm  Bk  Cf  Es  Fm Md No  Lr ");
return 0;
}
atomic_no()
{
setcolor(YELLOW);
outtextxy(33,50,"1                                                                  2");
outtextxy(33,100,"3   4                                            5  6   7   8   9  10 ");
outtextxy(33,150,"11 12                                           13  14 15  16  17  18");
outtextxy(33,200,"19 20  21     22  23  24 25  26  27  28 29  30  31  32 33  34  35  36");
outtextxy(33,250,"37 38  39     40  41  42 43  44  45  46 47  48  49  50 51  52  53  54");
outtextxy(33,300,"55 56 57-71   72  73  74 75  76  77  78 79  80  81  82 83  84  85  86");
outtextxy(33,350,"87 88 89-103  104 105 106107 108 109110 111 112 113114 115 116 117 118");
outtextxy(89,410,"57  58 59  60  61  62 63  64  65  66 67  68  69 70  71");
outtextxy(89,455,"89  90 91  92  93  94 95  96  97 98  99 100 101 102 103");
return 0;
}
element()             //this function is incomplete
{
char ele[2];
printf("Enter the name of the element\n");
scanf("%s",&ele);
if(strcmp(ele,"H")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(33,30,"H");
 outtextxy(33,50,"1");
 }
else if(strcmp(ele,"He")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(570,30,"He");
 outtextxy(570,50,"2");
 }
else if(strcmp(ele,"Li")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(30,80,"Li");
 outtextxy(33,100,"3");
 }
else if(strcmp(ele,"Be")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(60,80,"Be");
 outtextxy(63,100,"4");
 }
else if(strcmp(ele,"B")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(420,80,"B");
 outtextxy(420,100,"5");
 }
else if(strcmp(ele,"C")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(450,80,"C");
 outtextxy(450,100,"6");
 }
else if(strcmp(ele,"N")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(480,80,"N");
 outtextxy(480,100,"7");
 }
else if(strcmp(ele,"O")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(510,80,"O");
 outtextxy(510,100,"8");
 }
else if(strcmp(ele,"F")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(540,80,"F");
 outtextxy(540,100,"9");
 }
else if(strcmp(ele,"Ne")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(570,80,"Ne");
 outtextxy(570,100,"10");
 }
else if(strcmp(ele,"Na")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(30,130,"Na");
 outtextxy(30,150,"11");
 }
else if(strcmp(ele,"Mg")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(60,130,"Mg");
 outtextxy(60,150,"12");
 }
else if(strcmp(ele,"Al")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(420,130,"Al");
 outtextxy(420,150,"13");
 }
 else if(strcmp(ele,"Si")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(450,130,"Si");
 outtextxy(450,150,"14");
 }
  else if(strcmp(ele,"P")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(480,130,"P");
 outtextxy(480,150,"15");
 }
  else if(strcmp(ele,"S")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(510,130,"S");
 outtextxy(510,150,"16");
 }
  else if(strcmp(ele,"Cl")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(540,130,"Cl");
 outtextxy(540,150,"17");
 }
  else if(strcmp(ele,"Ar")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(570,130,"Ar");
 outtextxy(570,150,"18");
 }
   else if(strcmp(ele,"K")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(30,180,"K");
 outtextxy(30,200,"19");
 }
   else if(strcmp(ele,"Ca")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(60,180,"Ca");
 outtextxy(60,200,"20");
 }
   else if(strcmp(ele,"Sc")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(90,180,"Sc");
 outtextxy(90,200,"21");
 }
   else if(strcmp(ele,"Ti")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(150,180,"Ti");
 outtextxy(150,200,"22");
 }
   else if(strcmp(ele,"V")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(180,180,"V");
 outtextxy(180,200,"23");
 }
   else if(strcmp(ele,"Cr")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(210,180,"Cr");
 outtextxy(210,200,"24");
 }
   else if(strcmp(ele,"Mn")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(240,180,"Mn");
 outtextxy(240,200,"25");
 }
   else if(strcmp(ele,"Fe")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(270,180,"Fe");
 outtextxy(270,200,"26");
 }
   else if(strcmp(ele,"Co")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(300,180,"Co");
 outtextxy(300,200,"27");
 }
 else if(strcmp(ele,"Ni")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(330,180,"Ni");
 outtextxy(330,200,"28");
 }
   else if(strcmp(ele,"Cu")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(360,180,"Cu");
 outtextxy(360,200,"29");
 }
   else if(strcmp(ele,"Zn")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(390,180,"Zn");
 outtextxy(390,200,"30");
 }
   else if(strcmp(ele,"Ga")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(420,180,"Ga");
 outtextxy(420,200,"31");
 }
   else if(strcmp(ele,"Ge")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(450,180,"Ge");
 outtextxy(450,200,"32");
 }
   else if(strcmp(ele,"As")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(480,180,"As");
 outtextxy(480,200,"33");
 }
   else if(strcmp(ele,"Se")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(510,180,"Se");
 outtextxy(510,200,"34");
 }
   else if(strcmp(ele,"Br")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(540,180,"Br");
 outtextxy(540,200,"35");
 }
   else if(strcmp(ele,"Kr")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(570,180,"Kr");
 outtextxy(570,200,"36");
 }
   else if(strcmp(ele,"Rb")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(30,230,"Rb");
 outtextxy(30,250,"37");
 }
    else if(strcmp(ele,"Sr")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(60,230,"Sr");
 outtextxy(60,250,"38");
 }
    else if(strcmp(ele,"Y")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(90,230,"Y");
 outtextxy(90,250,"39");
 }
    else if(strcmp(ele,"Zr")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(150,230,"Zr");
 outtextxy(150,250,"40");
 }
    else if(strcmp(ele,"Nb")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(180,230,"Nb");
 outtextxy(180,250,"41");
 }
    else if(strcmp(ele,"Mo")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(210,230,"Mo");
 outtextxy(210,250,"42");
 }
    else if(strcmp(ele,"Tc")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(240,230,"Tc");
 outtextxy(240,250,"43");
 }
    else if(strcmp(ele,"Ru")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(270,230,"Ru");
 outtextxy(270,250,"44");
 }
    else if(strcmp(ele,"Rh")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(300,230,"Rh");
 outtextxy(300,250,"45");
 }
    else if(strcmp(ele,"Pd")==0)
 {
 ptable();
 setcolor(YELLOW);

 outtextxy(330,230,"Pd");
 outtextxy(330,250,"46");
 }
    else if(strcmp(ele,"Ag")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(360,230,"Ag");
 outtextxy(360,250,"47");
 }
    else if(strcmp(ele,"Cd")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(390,230,"Cd");
 outtextxy(390,250,"48");
 }
    else if(strcmp(ele,"In")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(420,230,"In");
 outtextxy(420,250,"49");
 }
    else if(strcmp(ele,"Sn")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(450,230,"Sn");
 outtextxy(450,250,"50");
 }
    else if(strcmp(ele,"Sb")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(480,230,"Sb");
 outtextxy(480,250,"51");
 }
    else if(strcmp(ele,"Te")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(510,230,"Te");
 outtextxy(510,250,"I");
 }
 else if(strcmp(ele,"I")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(540,230,"I");
 outtextxy(540,250,"53");
 }
 else if(strcmp(ele,"Xe")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(570,230,"Xe");
 outtextxy(570,250,"54");
 }
 else if(strcmp(ele,"Cs")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(30,280,"Cs");
 outtextxy(30,300,"55");
 }
 else if(strcmp(ele,"Ba")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(60,280,"Ba");
 outtextxy(60,300,"56");
 }
 else if(strcmp(ele,"Hf")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(150,280,"Hf");
 outtextxy(150,300,"72");
 }
 else if(strcmp(ele,"Ta")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(180,280,"Ta");
 outtextxy(180,300,"73");
 }
 else if(strcmp(ele,"W")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(210,280,"W");
 outtextxy(210,300,"74");
 }
 else if(strcmp(ele,"Re")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(240,280,"Re");
 outtextxy(240,300,"75");
 }
 else if(strcmp(ele,"Os")==0)
 {
 ptable();
 setcolor(YELLOW);
 outtextxy(270,280,"Os");
 outtextxy(270,300,"76");
 }                         //TURBO C CANNOT HANDLE MORE THAN 76 ELEMENTS BECAUSE MEMORY IS FULL, YAY!!

return 0;
}
ptable()
{
int i,X1=20,Y1=20,X2=20,Y2=370;
setcolor(GREEN);
for(i=1;i<=2;i++) //Column 1
{
 line(X1,Y1,X2,Y2);
 X1=X1+30;
 X2=X1;
}
  Y1=70;     //Column 2
  Y2=370;
  line(X1,Y1,X2,Y2);
  X1+=30;
  X2=X1;

 Y1=170;  //Column 3
 Y2=370;
 line(X1,Y1,X2,Y2);
 X1=X1+30;
 X2=X1;

 for(i=1;i<=10;i++)  //Columns for d block
 {
 line(X1,Y1,X2,Y2);
 X1+=30;
 X2=X1;
 }
 X1=X1-30;
 X2=X1;
 Y1=70;    //Columns for p block
 Y2=370;
 for(i=1;i<=6;i++)
 {
 line(X1,Y1,X2,Y2);
 X1+=30;
 X2=X1;
 }
 Y1=20;
 X1=X1-30;
 X2=X1;
 line(X1,Y1,X2,Y2);
 X1=X1+30;
 X2=X1;
 line(X1,Y1,X2,Y2);

 X1=80;            //la-lu, ac-lr
 X2=X1;
 Y1=380;
 Y2=470;
 for(i=1;i<=16;i++)
 {
 line(X1,Y1,X2,Y2);
 X1=X1+30;
 X2=X1;
 }
X1=20;      //Rows for column 1
X2=50;
Y1=20;
Y2=Y1;
for(i=0;i<=7;i++)
{
 line(X1,Y1,X2,Y2);
 Y1=Y1+50;
 Y2=Y1;
}        //1 end

 Y1=70;  // Rows for column 2
 Y2=Y1;
 X1=50;
 X2=80;
 for(i=1;i<=7;i++)
 {
 line(X1,Y1,X2,Y2);
 Y1+=50;
 Y2=Y1;
 }         //2 end

Y1=170; //Rows for column 3
Y2=Y1;
X1=80;
X2=110;
for(i=1;i<=5;i++)
 {
 line(X1,Y1,X2,Y2);
 Y1+=50;
 Y2=Y1;
 }           //3 end

Y1=170;    //d block rows
Y2=Y1;
X1=140;
X2=410;
for(i=1;i<=5;i++)
 {
 line(X1,Y1,X2,Y2);
 Y1+=50;
 Y2=Y1;
 }            //d block end

Y1=70;    //P BLOCK
Y2=Y1;
X1= 410;
X2= 560;
for(i=1;i<=7;i++)
 {
 line(X1,Y1,X2,Y2);
 Y1=Y1+50;
 Y2=Y1;
 }
Y1=20;
Y2=Y1;
X1=560;
X2=590;
for(i=1;i<=8;i++)
 {
 line(X1,Y1,X2,Y2);
 Y1=Y1+50;
 Y2=Y1;
 }      //P

X1=80;
X2=530;
Y1=380;
Y2=Y1;
for(i=1;i<=3;i++)
 {
 line(X1,Y1,X2,Y2);
 Y1=Y1+45;
 Y2=Y1;
 }
 return 0;
}

