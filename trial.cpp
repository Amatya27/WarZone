#include <simplecpp>
#include <iostream>
#include <string>
#include <queue>
#include <fstream>
#include <stdlib.h>
#include <vector>
#include <cassert>
using namespace std;

class planeShape : public Polygon{
 public:
  planeShape(){
    double pts[14][2] = {{10, 0},
			 {0,3}, {-8,15}, {-5,3}, {-10,3},{-13,6},
			 {-13,-6},{-10,-3},{-5,-3},{-8,-15},{0,-3},{10,0}};
    reset(canvas_width()/2,canvas_height()/2, pts, 13);
    setScale(2.0);
    setFill();
    setColor(COLOR("blue"));
 //      penDown();
}
};

int main()
{
    // cout<<"\n\n\n\n\n\n\n\n\n";
  initCanvas("valid",900, 600);
  Rectangle r(450,300,700,450);
  planeShape t;
  planeShape t2;
  planeShape t3;
  planeShape t4;
  t2.setColor(COLOR("red"));
  t3.setColor(COLOR("red"));
  t4.setColor(COLOR("red"));
  char command;
  int flag=1, i=0, j=0, x=75, y= 100;
  t3.forward(300);
  t3.left(90);
  t3.left(90);
  t4.forward(300);
  t4.left(90);
  t4.left(90);
  t3.right(90);
  t3.forward(60);
  t3.left(90);
  t3.right(90);
  t3.forward(60);
  t3.left(90);
  t4.left(90);
  t4.forward(60);
  t4.right(90);
  t4.left(90);
  t4.forward(60);
  t4.right(90);
  t.left(90);
  t2.forward(300);
  t.left(90);
  t2.left(90);
  t.forward(300);
  t2.left(90);
  t.right(90);
  t.right(90);
  Circle c1(800,300,10);
  c1.setColor(COLOR("red"));
  c1.setFill(true);
  c1.left(90);
  c1.left(90);
int u=1;
char cmd;
delay(2500);
cout<<"\n\t\t\t Rules of the game are: \n";
delay(1000);
cout<<"\n\t\t\t w-> up \n\t\t\t s-> down \n\t\t\t a-> left \n\t\t\t d-> right \n\t\t\t x-> exit \n";
delay(500);
cout<<"\n\n\n\n\t\t\t AVOID GETTING HIT by the Inccoming Plane\n\n";
delay(500);
cout<<"\n\n\t\t\t Are you Ready?? \t\t\t (Y/N) \n\n\t\t\t";
cin>>cmd;
delay(500);
cout<<"\n";
if(cmd=='y'||cmd=='Y')
{
//if(getClick()!=0)
//{
         cout<<"\n\n\n\n\t\t\t\t   LOADING.... "<<'\n'<<'\t'<<'\t';
    int g;
    for(g=1;g<=20;g++)
    {
        delay(200);
        cout<<"²²";
        //x=x+2;

    }

cout<<"\n\n\n LOADED !!";
cout<<"\n\n\n\n\n\n\n\n";
cout<<"\n\n Enter the command:";
for( j=0; j<10; j++)
{
  while(i<100)
  {


    cin >> command;
        delay(10);
               //// t3.forward(75);
        //t4.forward(75);
        if(command == 'w')
    {
        flag=0;
        t.left(90);
        t.forward(60);
        t.right(90);
        flag=1;
        t2.forward(75);

        continue;
    }
    else if(command == 's')
    {
      t.right(90);
        t.forward(60);
        t.left(90);
        t4.forward(75);
        flag=0;
        continue;
    }
    else if(command == 'd')
    {
        t.forward(70);
        t3.forward(75);
        flag=0;
    }
    else if(command == 'a')
    {
         t.left(90);
         t.left(90);
         t.forward(50);
         t.right(90);
         t.right(90);
        flag=0;
    }
    else if(command=='x')
    {
int graphicdriver=DETECT,graphicmode;
	initgraph(&graphicdriver,&graphicmode,"c:\\turboc3\\bgi");

	//Printing message for user
	outtextxy(10, 10 + 10, "Hope you Enjoyed the Game !!");

	//setting color to yellow
	setcolor(YELLOW);

	//creating circle and fill it with
	//yellow color using floodfill.
	circle(300, 100, 40);
	setfillstyle(SOLID_FILL, YELLOW);
	floodfill(300, 100, YELLOW);

	//setting color to black
	setcolor(BLACK);
	setfillstyle(SOLID_FILL, BLACK);

	//using fill ellipse and ellipse for creating face.
	fillellipse(310, 85, 2, 6);
	fillellipse(290, 85, 2, 6);

	ellipse(300, 100, 205, 335, 20, 9);
	ellipse(300, 100, 205, 335, 20, 10);
	ellipse(300, 100, 205, 335, 20, 11);


	getch();
    exit(0);
    }
    flag=1;
    i++;
}
}

}
else if(cmd==0)
{
exit(0);
}
else
{
 cout<<"Wrong Choice!";
 delay(100);
 exit(0);
}
  return 0;
}
