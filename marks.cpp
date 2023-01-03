#include <iostream>
using namespace std;
void checkResult(int marks);
main()
{
  int marks;
  while(true)
  {
  cout << "Enter marks :";
  cin >> marks;
  checkResult( marks);
  }
}
void checkResult(int marks)
{
 
  if (marks > 50)
  {
   cout << "Pass" << endl;
  }
  if (marks < 50)
  {
   cout << "Fail" << endl;
  }
  if (marks == 50)
  {
   cout << "Work hard" << endl;
  }
 
}