#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);
void name();
main()
{
  gotoxy(0,0);
  name(char x , char y);
}
void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void name()
{
  cout <<" #############   ####    ########   ###         ##      ####    #####  " << endl;
  cout <<"          ###   ##   ##      #      ##  #       ##     ##   ##  #    # " << endl;
  cout <<"         ##     ##   ##      #      ##   #      ##     ##   ##  #    #" << endl;
  cout <<"        ##      ##   ##      #      ##    #     ##     ##   ##  #    #" << endl;
  cout <<"       ##       #######      #      ##     #    ##     #######  ######" << endl;
  cout <<"      ##        ##   ##      #      ##      #   ##     ##   ##  #    # " << endl;
  cout <<"     ##         ##   ##      #      ##       #  ##     ##   ##  #    # " << endl;
  cout <<"    ##          ##   ##      #      ##        # ##     ##   ##  #    #" << endl;
  cout <<"  ###           ##   ##      #      ##          ##     ##   ##  #    #" << endl;
  cout <<" #############  ##   ##   ########  ###         ###    ##   ##  #####" << endl;


}