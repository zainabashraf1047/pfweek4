#include <iostream>
#include <windows.h>
using namespace std;

void printmenu();
void aggregate1();
void aggregate2();
main()
{
  printmenu();
  aggregate1();
  aggregate2();
  if(aggregate1 > aggregate2)
  {
   cout << "1st has highest aggregate ";

  }
  if(aggregate1 < aggregate2)
  {
   cout <<"2nd has highest aggregate";

  }
}
void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void printmenu()
{

cout <<"**********************************"<< endl;
cout <<"*                                *"<< endl;
cout <<"*                                *"<< endl;
cout <<"* UNIVERSITY ADMISSION MANAGEMENT*"<< endl;
cout <<"*            SYSTEM              *"<< endl;
cout <<"*                                *"<< endl;
cout <<"*                                *"<< endl;
cout <<"**********************************"<< endl;
}
void aggregate1()
{
  string name;
  float matric;
  float fsc;
  float ecat;
  float aggregateM;
  float aggregateF;
  float aggregateE;
  cout <<"Enter name : ";
  cin >> name; 
  cout <<"Enter your matric no : " <<endl;
  cin >> matric;
  cout <<"Enter your inter no : " <<endl;
  cin >> fsc;
  cout <<"Enter your ecat no : " <<endl;
  cin >> ecat;
  aggregateM = (matric*100/1100)*0.3; 
  aggregateF =  aggregateM + (fsc*100/550)*0.3;
  aggregateE = aggregateF + (ecat*100/400)*0.4;
  cout <<"Your aggregate is : " << aggregateE <<endl;
}
void aggregate2()
{
  string name;
  float matric;
  float fsc;
  float ecat;
  float aggregateM;
  float aggregateF;
  float aggregateE1;
  cout <<"Enter name : ";
  cin  >> name; 
  cout <<"Enter your matric no : "<< endl;
  cin >> matric ;
  cout <<"Enter your inter no :" << endl;
  cin >> fsc ;
  cout <<"Enter your ecat no : "<< endl;
  cin >> ecat;
  aggregateM = (matric*100/1100)*0.3; 
  aggregateF =  aggregateM + (fsc*100/550)*0.3;
  aggregateE1 = aggregateF + (ecat*100/400)*0.4;
  cout <<"Your aggregate is : " << aggregateE1 ;
}