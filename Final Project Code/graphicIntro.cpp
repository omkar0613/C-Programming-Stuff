#include <stdlib.h>
#include <graphics.h>
using namespace std;
void getscreen();
int main() {
    initwindow(800,1000);
    int x=10;
    int y=400;
    moveto(564,126);
    lineto(564,234); // left vertical for number 9
    moveto(564,126);
    lineto(626,126); //horizontal for number 9
    moveto(626,126);
    lineto(688,126); // horizontal for number 0
    moveto(626,126);
    lineto(626,234); // vertical for number 9
    moveto(688,126);
    lineto(688,234); // vertical for number 0
    
    int xcord1=564;
    int ycord1=126;
    for(int horizontallines=1;horizontallines<=8;horizontallines++){ // All horizontal lines from 8 to 1 are drawn using this for loop
    moveto(xcord1,ycord1);
    lineto(xcord1-62,ycord1); 
    xcord1=xcord1-62;
	}
	
	int xcordy=502;
	int ycordy=126;
    for(int verticallines=1;verticallines<=8;verticallines++){ // All vertical lines from 8 to 1 are drawn using this for loop
    moveto(xcordy,ycordy);
    lineto(xcordy,ycordy+108); 
    xcordy=xcordy-62;
	}
	
	outtextxy(300,100,"AUTOMOBILE PARKING"); // Printing the text
	outtextxy(657,114,"0");
	outtextxy(595,114,"9");
	outtextxy(533,114,"8");
	outtextxy(471,114,"7");
	outtextxy(409,114,"6");
	outtextxy(347,114,"5");
	outtextxy(285,114,"4");
	outtextxy(223,114,"3");
	outtextxy(161,114,"2");
	outtextxy(99,114,"1");
	outtextxy(595,130,"D");
	outtextxy(10,470,"Starting Point");
	outtextxy(10,490,"D-Destination");
	
    for(int horizontalmovement=1;horizontalmovement<=4;horizontalmovement++)
	{
	setcolor(RED); // Red Rectangle is made
    moveto(x,y);
    lineto(x+100,y);
    moveto(x+100,y);
    lineto(x+100,y+50);
    moveto(x+100,y+50);
    lineto(x,y+50);
    moveto(x,y+50);
    lineto(x,y);
    delay(2000);
    x=x+100;
//    if(horizontalmovement!=4){
	
    setcolor(BLACK); // Black rectangle is made to overlap the previous red rectangle, which will appear as the movement
    moveto(x-100,y);
    lineto(x,y);
    moveto(x,y);
    lineto(x,y+50);
    moveto(x,y+50);
    lineto(x-100,y+50);
    moveto(x-100,y+50);
    lineto(x-100,y);
//}
}
///////////////////  Angular Shift of the Car ///////////////////////////////////
setcolor(RED);       // NUMBER 1
moveto(370,410);
lineto(470,390);
moveto(370,410);
lineto(380,460);
moveto(470,390);
lineto(480,440);
moveto(480,440);
lineto(380,460);
delay(2000);
setcolor(BLACK);
moveto(370,410);
lineto(470,390);
moveto(370,410);
lineto(380,460);
moveto(470,390);
lineto(480,440);
moveto(480,440);
lineto(380,460);

setcolor(RED);        // NUMBER 2
moveto(400,410);
lineto(500,390);
moveto(400,410);
lineto(410,460);
moveto(500,390);
lineto(510,440);
moveto(510,440);
lineto(410,460);
delay(2000);
setcolor(BLACK);
moveto(400,410); //1
lineto(500,390); //2
moveto(400,410); //3
lineto(410,460); //4
moveto(500,390); //5
lineto(510,440); //6
moveto(510,440); //7
lineto(410,460);




setcolor(RED);        // NUMBER 3
moveto(510,400);
lineto(550,440);  
moveto(510,400);
lineto(570,330);  
moveto(570,330);
lineto(610,370);
moveto(610,370);
lineto(550,440);
delay(2000);
setcolor(BLACK);
moveto(510,400);
lineto(550,440);  
moveto(510,400);
lineto(570,330);  
moveto(570,330);
lineto(610,370);
moveto(610,370);
lineto(550,440);

// vertical shift
int xcord=570;
int ycord=330;
for(int verticalshift=1;verticalshift<=2;verticalshift++){
setcolor(RED);
moveto(xcord,ycord);
lineto(xcord+50,ycord);
moveto(xcord,ycord);
lineto(xcord,ycord-100);
moveto(xcord,ycord-100);
lineto(xcord+50,ycord-100);
moveto(xcord+50,ycord-100);
lineto(xcord+50,ycord);
delay(2000);
ycord=ycord-100;
if(verticalshift!=2){
setcolor(BLACK);
moveto(xcord,ycord+100);
lineto(xcord+50,ycord+100);
moveto(xcord,ycord+100);
lineto(xcord,ycord);
moveto(xcord,ycord);
lineto(xcord+50,ycord);
moveto(xcord+50,ycord);
lineto(xcord+50,ycord+100);
}
}
    while (!kbhit()){
	delay(2000); 
    }
    closegraph();
	
    system ("PAUSE");
    return 0;
}
