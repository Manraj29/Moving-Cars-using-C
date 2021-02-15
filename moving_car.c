#include <graphics.h>
#include <stdio.h>
#include<math.h>

void dda(int x0,int y0, int x1,int y1)
{
	int dx=x1-x0;
	int dy=y1-y0;

	int step= abs(dx)>abs(dy) ? abs(dx):abs(dy);
	float xinc = dx/(float)step;
	float yinc = dy/(float)step;

	float x=x0;
	float y=y0;
	int i;
	for(i=0;i<=step;i++)
	{
		putpixel(x,y,RED);
		x+=xinc;
		y+=yinc;

	}

}


// Function to draw moving car
void draw_moving_car() {

    int i=0,j=520, gd = DETECT, gm;
    //int x=0,y=520
    // Passed three arguments to initgraph
    // function to initialize graphics mode
    initgraph(&gd, &gm, "C:/TC/BGI");


    for (i = 0 ; i <= 610 ; i = i + 20 ) {
	// Set color of car as red
	setcolor(YELLOW);

	// Thease lines for bonnet and
	// body of car
	//x,y,x1,y1
	line(0 + i, 300, 210 + i, 300);  //bonnet
	line(50 + i, 300, 75 + i, 270);  //back window
	line(75 + i, 270, 150 + i, 270);    //top
	line(150 + i, 270, 165 + i, 300);     //front window
	line(0 + i, 300, 0 + i, 330);       //back vertical line
	line(210 + i, 300, 210 + i, 330);      //front vertical line

	// For left wheel of car
	setcolor(WHITE);
	circle(65 + i, 330, 15);
	circle(65 + i, 330, 2);

	// For right wheel of car
	setcolor(WHITE);
	circle(145 + i, 330, 15);
	circle(145 + i, 330, 2);

	setcolor(YELLOW);
	// Line left of left wheel
	line(0 + i, 330, 50 + i, 330);

	// Line middle of both wheel
	line(80 + i, 330, 130 + i, 330);

	// Line right of right wheel
	line(210 + i, 330, 160 + i, 330);
	//road
	//setcolor(WHITE);
	dda(1052, 346,0 ,346);
	delay(50);

	// To erase previous drawn car, draw
	// the whole car at same possition
	// but color using black
	setcolor(BLACK);

	// Lines for bonnet and body of car
	line(0 + j, 100, 210 + j, 100);
	line(50 + j, 100, 75 + j, 70);
	line(0 + j, 100, 0 + j, 130);
	line(110+j,100,110+j,130);
	line(210 + j, 100, 210 + j, 130);      //front vertical line

	// For left wheel of car
	circle(65 + j, 130, 15);
	circle(65 + j, 130, 2);

	// For right wheel of car
	circle(145 + j, 130, 15);
	circle(145 + j, 130, 2);

	// Line left of left wheel
	line(0 + j, 130, 50 + j, 130);

	// Line middle of both wheel
	line(80 + j,130, 130 + j, 130);

	// Line right of right wheel
	line(210 + j, 130, 160 + j, 130);
	j = j - 30;

	 setcolor(YELLOW);

	// Thease lines for bonnet and
	// body of car
	line(0 + j, 100, 210 +j, 100);  //bonnet
	line(50 + j, 100, 75 + j,70);  //back window
	line(0 + j, 100, 0 + j, 130);       //back vertical line
	line(110+j,100,110+j,130);         //between
	line(210 + j, 100, 210 + j, 130);      //front vertical line

	// For left wheel of car
	setcolor(WHITE);
	circle(65 + j, 130, 15);
	circle(65 + j, 130, 2);

	// For right wheel of car
	setcolor(WHITE);
	circle(145 + j, 130, 15);
	circle(145 + j, 130, 2);

	setcolor(YELLOW);
	// Line left of left wheel
	line(0 + j, 130, 50 + j, 130);

	// Line middle of both wheel
	line(80 + j, 130, 130 + j, 130);

	// Line right of right wheel
	line(210 + j, 130, 160 + j, 130);
	//road
	//setcolor(RED);
	dda(1032, 146, 0 ,146);
	delay(50);


	// To erase previous drawn car, draw
	// the whole car at same possition
	// but color using black
	setcolor(BLACK);

	// Lines for bonnet and body of car
	line(0 + i, 300, 210 + i, 300);
	line(50 + i, 300, 75 + i, 270);
	line(75 + i, 270, 150 + i, 270);
	line(150 + i, 270, 165 + i, 300);
	line(0 + i, 300, 0 + i, 330);
	line(210 + i, 300, 210 + i, 330);

	// For left wheel of car
	circle(65 + i, 330, 15);
	circle(65 + i, 330, 2);

	// For right wheel of car
	circle(145 + i, 330, 15);
	circle(145 + i, 330, 2);

	// Line left of left wheel
	line(0 + i, 330, 50 + i, 330);

	// Line middle of both wheel
	line(80 + i, 330, 130 + i, 330);

	// Line right of right wheel
	line(210 + i, 330, 160 + i, 330);
	//i = i + 15;

    }
    getch();
    closegraph();
}

// Driver code
int main()
{
	clrscr();
	printf("\n\n\t\t***Compiled By MSV***");
	getch();
	draw_moving_car();
	//draw_moving_car2();

    return 0;
}
