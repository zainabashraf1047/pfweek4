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
string day;
int totalamount;
int payableamount;
cout<<"Enter day : ";
cin >> day;
cout <<"Enter total amount : ";
cin >> totalamount;
 if(day == "sunday")
 {
  payableamount = (10/100)*totalamount ;
  cout <<"Total payable amount is : " <<payableamount;
 }
 if(day !="sunday")
 {
  cout <<"Total payable amount is : " <<totalamount;
 }
}