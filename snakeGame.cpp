#include <iostream>
// #include <conio.h>
#include <curses.h>
// #include <windows.h>
#include <stdio.h>

using namespace std;
// HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
// COORD CursorPosition;


void gotoxy(int x,int y){
CursorPosition.X=x;
CursorPosition.Y=y;
SetConsoleCursorPosition(console,CursorPosition);
}
class Point
{
private:
    int x;
    int y;

public:
    Point()
    {
        x = y = 10;
    }
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void SetPoint(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    int GetX(){
        return x;
    }
    
    int GetY(){
        return y;
    }
    void MoveUp(){
        y--;
    }
    void MoveDown(){
        y++;
    }
void MoveLeft(){
        x--;
    }
void MoveRight(){
        x++;
    }

    void Draw(){
        gotoxy(x,y);
        cout<<"*";
    }
void Draw(){
        gotoxy(x,y);
        cout<<"*";
    }
    void Erase(){
        gotoxy(x,y);
cout<<" ";
    }
void Debuge(){
    cout<<"("<<x<<","<<y<<")";
}



}
int main()
{
Point p(5,20);
p.Debuge()
    return 0;
}