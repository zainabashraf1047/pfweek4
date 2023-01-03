#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y)
void a()
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

main()
{

}
void a()
{
  cout << "    ####"                  << endl;
  cout <<"   ###  ###"                << endl;
  cout <<"  ##      ##"               << endl;
  cout <<" ##        ##"              << endl;
  cout <<" ############"              << endl;
  cout <<" ##        ##"              << endl;
  cout <<" ##        ##"              << endl;
  cout <<" ##        ##"              << endl;



}