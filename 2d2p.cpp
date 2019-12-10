#include <conio.h>
#include <stdlib.h>
#include <iostream.h>
#include <graphics.h>
#include <dos.h>

int main() {
	int gd = DETECT, gm, i=0, j=0, x=0, y=0;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

	settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
	outtextxy(320, 120, "Player One:");
	outtextxy(320, 135, "Use W, A, S, D to move");
	outtextxy(320, 150, "Press E to shoot");

	outtextxy(320, 260, "Player Two:");
	outtextxy(320, 275, "Use UP, LEFT, DOWN, RIGHT to move");
	outtextxy(320, 290, "Press ENTER to shoot");

	outtextxy(50, 220, "v1.0");

	outtextxy(320, 400, "Press any key to continue...");

	settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
	outtextxy(50, 200, "NONAME-GAME");

	getch();

	cleardevice();
	rectangle(150, 230, 170, 250);
	rectangle(470, 230, 490, 250);

	while(1) {
		if(kbhit){
		char ch;
		char ch1 = ch;
		ch = getch();
		if(int(ch) == 27)
			break;
		if(int(ch) == 100 || int(ch) == 68) {
			cleardevice();
			i += 10;
			circle(170+i, 240+j, 5);
			floodfill(171+i, 240+j, 15);
		}
		if(int(ch) == 115 || int(ch) == 83) {
			cleardevice();
			j += 10;
			circle(160+i, 250+j, 5);
			floodfill(160+i, 251+j, 15);
		}
		if(int(ch) == 97 || int(ch) == 65) {
			cleardevice();
			i -= 10;
			circle(150+i, 240+j, 5);
			floodfill(149+i, 240+j, 15);
		}
		if(int(ch) == 119 || int(ch) == 87) {
			cleardevice();
			j -= 10;
			circle(160+i, 230+j, 5);
			floodfill(160+i, 229+j, 15);
		}

		if(int(ch) == 77) {
			cleardevice();
			x += 10;
			circle(490+x, 240+y, 5);
			floodfill(491+x, 240+y, 15);
		}
		if(int(ch) == 80) {
			cleardevice();
			y += 10;
			circle(480+x, 250+y, 5);
			floodfill(480+x, 251+y, 15);
		}
		if(int(ch) == 75) {
			cleardevice();
			x -= 10;
			circle(470+x, 240+y, 5);
			floodfill(469+x, 240+y, 15);
		}
		if(int(ch) == 72) {
			cleardevice();
			y -= 10;
			circle(480+x, 230+y, 5);
			floodfill(480+x, 229+y, 15);
		}



		rectangle(150+i, 230+j, 170+i, 250+j);
		rectangle(470+x, 230+y, 490+x, 250+y);
		if(int(ch) == 101 || int(ch) == 69) {
			int i1 = 0;
			int d1,d2,d3,d4,d5,d6;
			if(int(ch1) == 100 || int(ch1) == 68) {
			for(int z = 0; z < 10; z++) {
				cleardevice();
				i1 += 10;
				rectangle(150+i, 230+j, 170+i, 250+j);
				setfillstyle(1, 15);
				rectangle(165+i, 238+j, 175+i, 242+j);
				floodfill(166+i, 239+j, 15);
				floodfill(171+i, 239+j, 15);
				rectangle(d2=470+x, d3=230+y, d6=490+x, d4=250+y);
				line(160+i+i1, d5=240+j, d1=165+i+i1, 240+j);
				if(d1 > d2 && d5 > d3 && d5 < d4 && d6 > d1) {
					cleardevice();
					settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
					outtextxy(300, 240, "Player One WINS!");
					getch();
					exit(1);
				}
				delay(10);
			}
			}
			if(int(ch1) == 115 || int(ch1) == 83) {
			for(int z = 0; z < 10; z++) {
				cleardevice();
				i1 += 10;
				rectangle(150+i, 230+j, 170+i, 250+j);
				setfillstyle(1, 15);
				rectangle(158+i, 245+j, 162+i, 255+j);
				floodfill(159+i, 246+j, 15);
				floodfill(159+i, 251+j, 15);
				rectangle(d3=470+x, d2=230+y, d4=490+x, d6=250+y);
				line(d5=160+i, 240+j+i1, 160+i, d1=245+j+i1);
				if(d1 > d2 && d5 > d3 && d5 < d4 && d6 > d1) {
					cleardevice();
					settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
					outtextxy(300, 240, "Player One WINS!");
					getch();
					exit(1);
				}
				delay(10);
			}
			}
			if(int(ch1) == 97 || int(ch1) == 65) {
			for(int z = 0; z < 10; z++) {
				cleardevice();
				i1 += 10;
				rectangle(150+i, 230+j, 170+i, 250+j);
				setfillstyle(1, 15);
				rectangle(145+i, 238+j, 155+i, 242+j);
				floodfill(146+i, 239+j, 15);
				floodfill(151+i, 239+j, 15);
				rectangle(d2=470+x, d3=230+y, d6=490+x, d4=250+y);
				line(160+i-i1, d5=240+j, d1=165+i-i1, 240+j);
				if(d1 > d2 && d5 > d3 && d5 < d4 && d6 > d1) {
					cleardevice();
					settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
					outtextxy(300, 240, "Player One WINS!");
					getch();
					exit(1);
				}
				delay(10);
			}
			}
			if(int(ch1) == 119 || int(ch1) == 87) {
			for(int z = 0; z < 10; z++) {
				cleardevice();
				i1 += 10;
				rectangle(150+i, 230+j, 170+i, 250+j);
				setfillstyle(1, 15);
				rectangle(158+i, 225+j, 162+i, 235+j);
				floodfill(159+i, 226+j, 15);
				floodfill(159+i, 231+j, 15);
				rectangle(d3=470+x, d2=230+y, d4=490+x, d6=250+y);
				line(d5=160+i, 240+j-i1, 160+i, d1=245+j-i1);
				if(d1 > d2 && d5 > d3 && d5 < d4 && d6 > d1) {
					cleardevice();
					settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
					outtextxy(300, 240, "Player One WINS!");
					getch();
					exit(1);
				}
				delay(10);
			}
			}

		}

		if(int(ch) == 13) {
			int i1 = 0;
			int d1,d2,d3,d4,d5,d6;
			if(int(ch1) == 77) {
			for(int z = 0; z < 10; z++) {
				cleardevice();
				i1 += 10;
				rectangle(470+x, 230+y, 490+x, 250+y);
				setfillstyle(1, 15);
				rectangle(485+x, 238+y, 495+x, 242+y);
				floodfill(486+x, 239+y, 15);
				floodfill(491+x, 239+y, 15);
				rectangle(d2=150+i, d3=230+j, d6=170+i, d4=250+j);
				line(480+x+i1, d5=240+y, d1=485+x+i1, 240+y);
				if(d1 > d2 && d5 > d3 && d5 < d4 && d6 > d1) {
					cleardevice();
					settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
					outtextxy(300, 240, "Player Two WINS!");
					getch();
					exit(1);
				}
				delay(10);
			}
			}
			if(int(ch1) == 80) {
			for(int z = 0; z < 10; z++) {
				cleardevice();
				i1 += 10;
				rectangle(470+x, 230+y, 490+x, 250+y);
				setfillstyle(1, 15);
				rectangle(478+x, 245+y, 482+x, 255+y);
				floodfill(479+x, 246+y, 15);
				floodfill(479+x, 251+y, 15);
				rectangle(d3=150+i, d2=230+j, d4=170+i, d6=250+j);
				line(d5=480+x, 240+y+i1, 480+x, d1=245+y+i1);
				if(d1 > d2 && d5 > d3 && d5 < d4 && d6 > d1) {
					cleardevice();
					settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
					outtextxy(300, 240, "Player Two WINS!");
					getch();
					exit(1);
				}
				delay(10);
			}
			}
			if(int(ch1) == 75) {
			for(int z = 0; z < 10; z++) {
				cleardevice();
				i1 += 10;
				rectangle(470+x, 230+y, 490+x, 250+y);
				setfillstyle(1, 15);
				rectangle(465+x, 238+y, 475+x, 242+y);
				floodfill(466+x, 239+y, 15);
				floodfill(471+x, 239+y, 15);
				rectangle(d2=150+i, d3=230+j, d6=170+i, d4=250+j);
				line(480+x-i1, d5=240+y, d1=485+x-i1, 240+y);
				if(d1 > d2 && d5 > d3 && d5 < d4 && d6 > d1) {
					cleardevice();
					settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
					outtextxy(300, 240, "Player Two WINS!");
					getch();
					exit(1);
				}
				delay(10);
			}
			}
			if(int(ch1) == 72) {
			for(int z = 0; z < 10; z++) {
				cleardevice();
				i1 += 10;
				rectangle(470+x, 230+y, 490+x, 250+y);
				setfillstyle(1, 15);
				rectangle(478+x, 225+y, 482+x, 235+y);
				floodfill(479+x, 226+y, 15);
				floodfill(479+x, 231+y, 15);
				rectangle(d3=150+i, d2=230+j, d4=170+i, d6=250+j);
				line(d5=480+x, 240+y-i1, 480+x, d1=245+y-i1);
				if(d1 > d2 && d5 > d3 && d5 < d4 && d6 > d1) {
					cleardevice();
					settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
					outtextxy(300, 240, "Player Two WINS!");
					getch();
					exit(1);
				}
				delay(10);
			}
			}

		}
		}
	}
	getch();
	closegraph();
	return 0;
}