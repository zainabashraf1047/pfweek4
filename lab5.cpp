#include<iostream>
#include<windows.h>
using namespace std;
void number();
main()
{
  
number();
}
void number()
{
 int no1;
 int no2;
 cout <<"Enter 1st no : ";
 cin >> no1;
 cout << "Enter 2nd no : ";
 cin >> no2;
 if(no1 > no2)
 {
  cout <<"Greater no is number 1 " <<no1;
 }
  if(no1 < no2)
 {
  cout << "Greater no is number 2 " ;
 }


}