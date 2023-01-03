#include <iostream>
using namespace std;

void add(int number1,int number2);
void product(int number1,int number2);
void minus(int number1, int number2);
void divide(int number1, int number2);

main()
{
 int num1;
 int num2;
 char operation;
 cin >> num1;
 cin >> num2;
 cin >> operation;

 if(operation == '+')
 {
   add(num1 , num2)
 }
 if( operation == '-')
 {
   
   minus(num1 , num2)
 }
 if( operation == '*')
 {
   
   product(num1 , num2)
 }
 if( operation == '/')
 {
   
   divide(num1 , num2)
 }
}

void add(int number1,int number2)
{
 int sum;
 sum = number1 + number2;
 cout << "sum : " <<sum << endl;
}

void product(int number1,int number2)
{
 int multiply;
 multiply = number1 * number2;
 cout << "Product is : " << multiply << endl;
}
void minus(int number1, int number2)
{
  int subtraction ;
  subtraction = number1 - number2;
  cout <<"Subtraction is : " << subtraction << endl;
}
void divide(int number1, int number2)
{
  int division;
  division = number1 / number2;
  cout <<"division is : " << division << endl;


}