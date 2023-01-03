#include <iostream>
#include<windows.h>
using namespace std;
void price();
main()
{
  price();

}
void price()
{
float discount;
float priceafterdiscount;
float pricer = 2.0;
float pricew = 4.10;
float pricet = 2.5;
int totalprice;
int red;
int white;
int tulip;
cout <<"Enter number of red roses : ";
cin >> red;
cout <<"Enter number of white roses : ";
cin >> white;
cout <<"Enter number of tulips : ";
cin >> tulip;
totalprice = (red*pricer) + (white*pricew) + (tulip*pricet);
  if(totalprice > 200)
  {
   discount = (totalprice * 0.2);
   cout << "The price is : " <<discount;
   priceafterdiscount = totalprice - discount;
   cout <<"The price after discount is : " <<priceafterdiscount;
   
 
  }
}