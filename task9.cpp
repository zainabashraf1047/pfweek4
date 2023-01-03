#include <iostream>
#include <windows.h>
using namespace std;
void tf();

main()
{
  tf();


}
void tf()
{
  string input;
 
  cout << "Enter value: ";
  cin >> input;

  if (input == "true")
  {
   cout <<"False";
  }
  if (input == "false")
  {
   cout << "True";

  }
}