#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<iostream>
#include<math.h>
using namespace std;
#define pi 3.14
main()
{
   int gd = DETECT, gm, x, y, color, angle = 0;
   struct arccoordstype a, b;
   initgraph(&gd, &gm, "C:\\TC\\BGI");
   
   	cout << sin(3.14)<<endl;
   	line(0,400,630,400);
	float u = 104.5;
	int theta = 45;
	x = 0;
	y = 400;
	setcolor(BLUE);
	circle(620, 200, 10);
	for(float t = 0; t < 630; t+=0.2) {	
		y = 400 - (u * sin(theta * pi / 180) * t - 5 * t * t);
		x = u * cos(theta) * t;
		putpixel(x,y,WHITE);
		setcolor(RED);
		circle(x, y, 10);

		delay(50);
		setcolor(BLACK);
		circle(x, y, 10);
		//setfillstyle(HATCH_FILL,BLACK);
    	//floodfill(x,y,BLACK);
		delay(10);
	}
   
   /*while(angle<=360)
   {
      setcolor(BLACK);
      arc(getmaxx()/2,getmaxy()/2,angle,angle+2,100);
      setcolor(RED);
      getarccoords(&a);
      circle(a.xstart,a.ystart,25);
      setcolor(BLACK);
      arc(getmaxx()/2,getmaxy()/2,angle,angle+2,150);
      getarccoords(&a);
      setcolor(GREEN);
      circle(a.xstart,a.ystart,25);
      angle = angle+5;
      delay(50);
   }*/
   
   getch();
   closegraph();
}
