
#include <iostream>
#include <windows.h>
using namespace std;
void price();
main()
{
while(true)
{
 price();
}
}
void price()
{
  string country;
  int tprice;

  int dprice;
  cout << "Enter country name :";
  cin >> country;
  cout << "Enter Ticket price :";
  cin >> tprice;

  if(country == "pakistan")
  { 
   dprice = (tprice / 100)* 5;
   cout << "price is : " << dprice << endl;
  }

  if(country == "india")
  {
   dprice = (tprice / 100)*20 ;
   cout << "price is: " << dprice << endl;
  }

  if(country == "ireland")
  {
   dprice = (tprice / 100)* 10 ;
   cout << "price is : " << dprice << endl;
  }

  if(country == "england")
  {
   dprice = (tprice / 100)*30  ;
   cout << "price is : " << dprice << endl;
  }
  if(country == "canada")
  {
   dprice = (tprice / 100)*45 ;
   cout << "price is : " << dprice << endl;
  }

}