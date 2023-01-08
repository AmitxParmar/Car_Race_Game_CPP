#include<iostream>
#include<conio.h>
#include<dos.h>
#include<windows.h>
#include<time.h>

#define SCREEN_WIDTH 90
#DEFINE SCREEN_HEIGHT 26
#define WIN_WIDTH 70

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

int enemyY[3];
int enemyX[3];
int enemyFlag[3];
char car[4][4] = { ' ', '+-', '+-', ' ',
                    '+-', '+-', '+-', '+-',
                    ' ', '+-', '+-', ' ',
                    '+-', '+-', '+-', '+-'};

int carPos = WIN_WIDTH/2;
int score = 0;

void gotoxy(int x, int y){
    CursorPosition.X = x;
    CursorPosition.Y = y;
SetConsoleCurrentPosition(console, CursorPosition);
}

void setcursor(bool visible, DWORD size) {
    if(size == 0)
    size = 20;

    CONSOLE.CURSOR_INFO lpCursor;
    lpCursor.bVisible = visible;
    lpCursor.dwSize = size;
    SetConsoleCursorInfo(console, &lpCursor);
}
