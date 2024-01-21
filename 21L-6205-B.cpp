#include <iostream>
#include "mygraphics.h"
#include "myconsole.h"
#include <fstream>
#include <stdlib.h>
using namespace std;

struct dimension
{
	int x1 = 0;
	int x2 = 0;
	int y1 = 0;
	int y2 = 0;
	int col = 128;
	int clr2 = 0;
	int clr3 = 0;
	int clr4 = 255;
	int clr5 = 255;
	int clr6 = 0;
	bool killed = false;
	bool hit = false;
};

void lives(int life) {

	if (life == 3){

		myEllipse(845, 0, 845 + 30, 30, RGB(255, 0, 0), RGB(255, 255, 255)); 
		myEllipse(880, 0, 880 + 30, 30, RGB(255, 0, 0), RGB(255, 255, 255));
		myEllipse(915, 0, 915 + 30, 30, RGB(255, 0, 0), RGB(255, 255, 255));
	}
	else if (life == 2){
		myEllipse(845, 0, 845 + 30, 30, RGB(255, 0, 0), RGB(255, 255, 255));  
		myEllipse(880, 0, 880 + 30, 30, RGB(255, 0, 0), RGB(255, 255, 255));
		myEllipse(915, 0, 915 + 30, 30, RGB(11, 12, 13), RGB(11, 12, 13));

	}
	else if (life == 1){
		myEllipse(845, 0, 845 + 30, 30, RGB(255, 0, 0), RGB(255, 255, 255));
		myEllipse(880, 0, 880 + 30, 30, RGB(11, 12, 13), RGB(11, 12, 13));
		myEllipse(915, 0, 915 + 30, 30, RGB(11, 12, 13), RGB(11, 12, 13));
	}
	else if (life == 0){
		myEllipse(845, 0, 845 + 30, 30, RGB(11, 12, 13), RGB(11, 12, 13));
		myEllipse(880, 0, 880 + 30, 30, RGB(11, 12, 13), RGB(11, 12, 13));
		myEllipse(915, 0, 915 + 30, 30, RGB(11, 12, 13), RGB(11, 12, 13));
	}
}

void boxes(int box_x, int box_y, dimension box[5][10], int win_y) {
	int a = box_x;
	for (int i = 0; i < 5; i++){

		for (int j = 0; j < 10; j++){
			if (box_y < win_y - 50)
			myRect(box_x, box_y, box_x + 60, box_y + 30, RGB(box[i][j].col, box[i][j].clr2, box[i][j].clr3), RGB(box[i][j].clr4, box[i][j].clr5, box[i][j].clr6));
			box_x = box_x + 70;
		}
		box_x = a;
		box_y = box_y + 40;

	}

}

void D_boxes(int box_x, int box_y, dimension box[5][10], int win_y) {
	int a = box_x;
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 10; j++){
			if (box_y < win_y - 50)
				myRect(box_x, box_y, box_x + 60, box_y + 30, RGB(11,12,13), RGB(11,12,13));
			box_x = box_x + 70;
		}
		box_x = a;
		box_y = box_y + 40;

	}

}

void BoxDimensions(int box_x, int box_y, dimension B[5][10]){
	for (int i = 0; i < 5; i++){
		for (int c = 0; c < 10; c++) {
			B[i][c].x1 = box_x;
			B[i][c].y1 = box_y;
			B[i][c].x2 = box_x + 60;
			B[i][c].y2 = box_y + 30;
			box_x = box_x + 70;
		}
		box_x = 130;
		box_y = box_y + 40;
	}
}

void Grid(int win_x, int win_y) {
	myLine(0, 0, 0, win_y, RGB(255, 100, 155));//left boundary
	myLine(0, win_y, win_x, win_y, RGB(255, 100, 155));//down boundary
	myLine(win_x, win_y, win_x, 0, RGB(255, 100, 155));//right boundary
	myLine(0, 0, win_x, 0, RGB(255, 100, 155));//upward boundary
}

void scr(int score){
	int a,b, c, d , e;
	ifstream ione("a.txt");
	ione >> a;
	ifstream itwo("b.txt");
	itwo >> b;
	ifstream ithree("c.txt");
	ithree >> c;
	ifstream ifour("d.txt");
	ifour >> d;
	ifstream ifive("e.txt");
	ifive >> e;
	if (score > a){
		a = score;
		ofstream one("a.txt");
		one << a;
	}
	else if (score > b&&score<a){
		b = score;
		ofstream two("b.txt");
		two << b;
	}
	else if (score > c&&score<b){
		c = score;
		ofstream three("c.txt");
		three << c;
	}
	else if (score > d&&score<c){
		d = score;
		ofstream four("d.txt");
		four << d;
	}
	else if (score > e&&score<d){
		e = score;
		ofstream five("e.txt");
		five << e;
	}

	PlaceCursor(0, 10);
	cout << " High Scores" << endl;
	cout <<"   "<< a << endl;
	cout <<"   "<< b << endl;
	cout <<"   "<< c << endl;
	cout <<"   "<< d << endl;
	cout <<"   "<< e << endl;
	ClearScreen();
}

int main()
{
	//system("Color 0C");
	int win_x, win_y; 	
	char over[10] = "GAME OVER"; 
	char start[50] = "Press ENTER for New Game";
	char invaders[50] = "SPACE INVADERS";
	char saved[50] = "Press C to continue Saved Game";
	char resume[20] = "Press ESC to resume";
	char save[30] = "Press S to Save Game";
	char Lives[10] = "Lives : ";
	char P[20] = "GAME PAUSED";
	char won[8] = "You win";
	double box_x, box_y;
	int ball_x, ball_y;
	bool dir = false;
	bool flag = true;
	int fire_x, fire_y;
	char demo[] = "SPACE INVADERS";
	dimension Box[5][10];
	dimension Goli;
	bool killed = false;
	bool hit = false;
	int score = 0;
	int L = 3;
	int max ;
	bool pause = true;
	bool enter = false;
	//char demo[] = "demo";
	//char space[] = "space";
	//bool pressed = false;

	GetWindowDimensions(win_x, win_y);

	box_x = 130;
	box_y = 35;

	ball_x = win_x / 2;
	ball_y = win_y - 50;

	ifstream score_m("score.txt");
	score_m >> max;
	while (enter==false){
		myDrawTextWithFont(230, 150, 60, start, RGB(0, 255, 255), RGB(20, 20, 20));
		myDrawTextWithFont(225, 250, 50, saved, RGB(0, 255, 255), RGB(20, 20, 20));
		
		int n = CheckKeyPressed();
		if (n == 13){
			enter = true;
			break;
		}
		else if (n == 99 || n==67){
			ifstream iballx("ball_x.txt");
			iballx >> ball_x;
			ifstream ibally("ball_y.txt");
			ibally >> ball_y;
			//ifstream iboxx("box_x");
			//iboxx >> box_x;
			ifstream iboxy("box_y.txt");
			iboxy >> box_y;
			ifstream iscore("score.txt");
			iscore >> score;
			ifstream ilives("lives.txt");
			ilives >> L;
			ifstream iColours("Colors.txt", ios::in);
			for (int a = 0; a < 5; a++){
				for (int b = 0; b < 10; b++){
					iColours >> Box[a][b].col;
					iColours >> Box[a][b].clr2;
					iColours >> Box[a][b].clr3;
					iColours >> Box[a][b].clr4;
					iColours >> Box[a][b].clr5;
					iColours >> Box[a][b].clr6;
					iColours >> Box[a][b].killed;
				}
			}
			enter = true;
			break;
		}
	}
	myDrawTextWithFont(230, 150, 60, start, RGB(11, 12, 13), RGB(11, 12, 13));
	myDrawTextWithFont(225, 250, 50, saved, RGB(11, 12, 13), RGB(11, 12, 13));

	myDrawTextWithFont(400, 0, 30, invaders, RGB(255, 0, 0), RGB(20, 20, 20));
	myDrawTextWithFont(800, 5, 20, Lives, RGB(255, 255, 0), RGB(20, 20, 20));
	//system("pause");

	

	
	SetWindowTitle(demo);
	myLine(0, 30, win_x, 30, RGB(255, 100, 155));
	

	/*box_x = 0;
	box_y = 0;*/
	
	//PlaceCursor(0, 0);
	while (flag && score < 500) {			//GAME LOOP
		killed = false;
		//ofstream outdata;
		//outdata.open("score.txt");
		ifstream score_m("highest.txt");
		score_m >> max;
		
		//BOX MOVEMENT
		
				
		
		Grid(win_x, win_y);
		BoxDimensions(box_x, box_y, Box);
		

		if (pause){
			if (L > 0 && (box_y<270)){
				
				//lives(L);
				D_boxes(box_x, box_y, Box, win_y);
				/*box_x += 3 - dir * 50;
				if (box_x > 300 || box_x < 0)
					dir = !dir;*/
				
				//Dboxes(box_x, box_y, Box, win_y);
				box_y += 0.5;
				boxes(box_x, box_y, Box, win_y);
				myEllipse(ball_x, ball_y, ball_x + 50, ball_y + 50, RGB(11, 12, 13), RGB(11, 12, 13));
				//MOVE BALL WITH LEFT AND RIGHT ARROW KEYS. PRESS SPACE TO CHANGE TEXT
				int a = CheckKeyPressed();
				if (a == LEFTKEY){
					if (ball_x > 50)
						ball_x -= 70;
				}
				else if (a == RIGHTKEY){
					if (ball_x < 900)
						ball_x += 70;
				}
				else if (a == UPKEY){
					if (ball_y > 0)
						ball_y -= 40;
				}
				else if (a == DOWNKEY){
					if (ball_y < win_y - 50)
						ball_y += 40;
				}

				//else if (a == 27)
					//flag = false;
				else if (a == 27)
					pause = false;
				else if (a == 32){
					int y = ball_y - 20;

					while (y > 0 && score < 500){
						myLine(ball_x + 25, y, ball_x + 25, y - 10, RGB(11, 12, 13));
						//myLine(ball_x + 25, y, ball_x + 25, y - 10, RGB(255, 255, 0));
						Goli.y1 = y;
						Goli.y2 = y - 10;
						Goli.x1 = ball_x + 25;
						Goli.x2 = ball_x + 25;

						for (int i = 0; i < 5; i++) {
							for (int j = 0; j < 10; j++) {
								if (Goli.y1 <= Box[i][j].y2 && Goli.y2 >= Box[i][j].y1 && Goli.x1 >= Box[i][j].x1 && Goli.x2 <= Box[i][j].x2 && Box[i][j].killed == false)
								{
									Box[i][j].col =11;
									Box[i][j].clr2 = 12;
									Box[i][j].clr3 = 13;
									Box[i][j].clr4 = 11;
									Box[i][j].clr5 = 12;
									Box[i][j].clr6 = 13;
									killed = true;
									Box[i][j].killed = true;
									score += 10;
									ofstream out_s("highest.txt",ios::trunc);
									if (score>max)
										max = score;
									out_s << max;
									Beep(100, 400);

								}


							}
						}
						if (killed)
						{
							break;
						}

						y = y-3;
						myLine(ball_x + 25, y, ball_x + 25, y - 10, RGB(253, 254, 255));
						//ClearScreen();
						//myDrawTextWithFont(400, 0, 30, invaders, RGB(255, 0, 255), RGB(20, 20, 20));
						//myDrawTextWithFont(800, 5, 20, Lives, RGB(255, 255, 0), RGB(20, 20, 20));
						myEllipse(ball_x, ball_y, ball_x + 50, ball_y + 50, RGB(255, 0, 0), RGB(255, 255,255));
						//boxes(box_x, box_y, Box, win_y);
						//Grid(win_x, win_y);
						myLine(0, 30, win_x, 30, RGB(255, 100, 155));
						PlaceCursor(0, 0);
						cout << "SCORE : " << score << "         Highest : " << max;
						
					}
				}
				lives(L);
				for (int i = 0; i < 5; i++) {
					for (int j = 0; j < 10; j++) {
						if (ball_y <= Box[i][j].y2 && ball_y + 50 >= Box[i][j].y1 && ball_x >= Box[i][j].x1 && ball_x + 50 <= Box[i][j].x2 &&  Box[i][j].killed == false && Box[i][j].hit == false){
							L--;
							lives(L);
							Box[i][j].hit = true;
							Box[i][j].killed = true;
							Box[i][j].col = 11;
							Box[i][j].clr2 = 12;
							Box[i][j].clr3 = 13;
							Box[i][j].clr4 = 11;
							Box[i][j].clr5 = 12;
							Box[i][j].clr6 = 13;

							break;
						}
					}
				}
			}
			else if (L <= 0 || (box_y>=270)){
				myDrawTextWithFont(300, 230, 100, over, RGB(0, 255, 255), RGB(20, 20, 20));
			}
		}
		else if (!pause){
			scr(score);
			myDrawTextWithFont(370, 70, 50, P, RGB(255, 200, 255), RGB(20, 20, 20));
			myDrawTextWithFont(320, 150, 50, save, RGB(0, 255, 255), RGB(20, 20, 20));
			myDrawTextWithFont(320, 250, 50, resume, RGB(0, 255, 255), RGB(20, 20, 20));
			lives(L);
			int x = CheckKeyPressed();
			if (x == 27){
				pause = true;
				myDrawTextWithFont(370, 70, 50, P, RGB(11, 12, 13), RGB(11, 12, 13));
				myDrawTextWithFont(320, 150, 50, save, RGB(11, 12, 13), RGB(11, 12, 13));
				myDrawTextWithFont(320, 250, 50, resume, RGB(11, 12, 13), RGB(11, 12, 13));
			}
			else if (x == 115 || x == 83) {
				ofstream oballx("ball_x.txt");
				oballx << ball_x;
				ofstream obally("ball_y.txt");
				obally << ball_y;
				//ofstream oboxx("box_x.txt");
				//oboxx << box_x;
				ofstream oboxy("box_y.txt");
				oboxy << box_y;
				ofstream oscore("score.txt");
				oscore << score;
				ofstream olives("lives.txt");
				olives << L;
				ofstream oColours("Colors.txt",ios::out);
				for (int a = 0; a < 5; a++){
					for (int b = 0; b < 10; b++){
						oColours << Box[a][b].col << " ";
						oColours << Box[a][b].clr2 << " ";
						oColours << Box[a][b].clr3 << " ";
						oColours << Box[a][b].clr4 << " ";
						oColours << Box[a][b].clr5 << " ";
						oColours << Box[a][b].clr6 << " ";
						oColours << Box[a][b].killed << " ";
					}
				}
				myDrawTextWithFont(370, 70, 50, P, RGB(11, 12, 13), RGB(11, 12, 13));
				myDrawTextWithFont(320, 150, 50, save, RGB(11, 12, 13), RGB(11, 12, 13));
				myDrawTextWithFont(320, 250, 50, resume, RGB(11, 12, 13), RGB(11, 12, 13));
			}
		}
		//Sleep(10);

		//CLEAR PREVIOUS FRAME
		//ClearScreen();
		//lives(L);
		//myLine(0, 30, win_x, 30, RGB(255, 100, 155));
		myEllipse(ball_x, ball_y, ball_x + 50, ball_y + 50, RGB(255, 0, 0), RGB(255, 255, 255));
		//Dboxes(box_x, box_y, Box,win_y);
		//ClearScreen();
		PlaceCursor(0, 0);
		//SetColorAtPoint(0, 0, BACKGROUND_GREEN);
		myDrawTextWithFont(400, 0, 30, invaders, RGB(255, 0, 255), RGB(20, 20, 20));
		myDrawTextWithFont(800, 5, 20, Lives, RGB(255, 255, 0), RGB(20, 20, 20));
		cout << "SCORE : " << score << "         Highest : " << max;
		
		if (score == 500){
			myDrawTextWithFont(300, 230, 120, won, RGB(0, 255, 255), RGB(20, 20, 20));
		}
	
	}
}