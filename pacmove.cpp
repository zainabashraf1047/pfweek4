#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int ,int);
void printmaze();
void pacman(int x, int y);
main()
{
  system("cls");
  printmaze();
  int x = 3;
  int y = 3;
  while(true)
  {
    pacman(x,y);
    if(x < 22)
    {
      x = x + 1;
    }
    if(x == 20)
    {
      gotoxy(x-1 , y);
      cout << " ";
      x = 3;

    } 
  }
}

void printmaze()
{
cout <<"###################################" << endl;
cout <<"#                                 #" << endl;
cout <<"#                                 #" << endl;
cout <<"#                                 #" << endl;
cout <<"#                                 #" << endl;
cout <<"#                                 #" << endl;
cout <<"#                                 #" << endl;
cout <<"#                                 #" << endl;
cout <<"#                                 #" << endl;
cout <<"#                                 #" << endl;
cout <<"###################################" << endl;
}
void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void pacman(int x, int y)
{
  gotoxy(x-1 ,y);
  cout << " ";
  gotoxy(x , y);
  cout << "P";
  Sleep(200);


}