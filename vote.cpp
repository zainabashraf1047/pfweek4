include <iostream>
using namespace std;
void isEligible(int age);
main()
{
 int age;
 cout <<"Enter your age :";
 cin >> age;
 isEligible(age);
 if(age >= 18)
 {
  cout << "You are eligible";
 }

 if(age < 18)
 {

  cout << "Your are not eligible"
 }

}