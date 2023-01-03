#include <iostream>
#include <windows.h>
using namespace std;
void isEqual();

main()
{
  isEqual();


}
void isEqual()
{
  int no1;
  int no2;
 
  cout << "Enter no 1: ";
  cin >> no1;
  cout << "Enter no 2 : ";
  cin >> no2;
  if (no1 == no2)
  {
   cout <<"True";
  }
  if (no1 != no2)
  {
   cout << "False";

  }
}