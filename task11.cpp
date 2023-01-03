#include <iostream>
#include <windows.h>
using namespace std;
void carspeed();
main()
{
  carspeed();
}

void carspeed()
{
 int speed;
 cout << "Enter speed in km/h : ";
 cin>> speed;
 if(speed =< 100)
 {
  cout << "You are doing well." ;

 }
 if(speed > 100)
 {
  cout << "You will be challenged!!" ;

 }
}


