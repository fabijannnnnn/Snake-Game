#include <iostream>
#include <random>
#include <ncurses.h>
using namespace std;

bool gameOver;
const int height = 20;
const int width = 40;
int x, y, fruitX, fruitY, score;
enum eDirection {Stop = 0, Left, Right, Up, Down};
eDirection direction;

//int randomNumber(){
//    random_device rd;
//    mt19937 mt(rd());
//    uniform_real_distribution<int16_t> dist(1, 32000);
//    return dist(mt);
//}

void Setup()
{
    gameOver = false;
    direction = Stop;
    score = 0;
    x = height / 2;
    y = width / 2;
    fruitX = rand() % height;
    fruitY = rand() % width;
}
void Draw()
{
    system("clear");

    for(int i = 0; i < width + 2; i++)
    {
        cout << "#";
    }
    cout << endl;

    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            if(j == 0)
                cout << "#";
            if(i == y / 2 && j == x)
                cout << "P";
            else if(i == fruitY && j == fruitX)
                cout << "F";
            else
                cout << " ";

            if(j == width - 1)
            {
                cout << "#";
            }
        }
        cout << endl;
    }
    for(int i = 0; i < width + 2; i++)
    {
        cout << "#";
    }
    cout << endl;
}
void Input()
{
    if(getch())
    {

    }
}
void Logic()
{

}

int main() {
    Setup();
    Draw();
    Logic();
    Input();

//    initscr(); // Initialize ncurses
//    cbreak(); // Line buffering disabled, pass on everything
//    noecho(); // Don't echo() while we do write
//
//    printw("Press any key to continue...\n");
//    refresh(); // Print it on to the real screen
//
//    getch(); // Wait for user input
//
//    endwin(); // End ncurses
    return 0;
}
