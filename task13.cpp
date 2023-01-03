#include <iostream>
#include <windows.h>
using namespace std;
main()
{
 int holidays;
 int workingDays;
 int timeforGames;
 int difference;
 int workplay;
 int holidayplay;
 int normgame = 30000;
 workingDays = 63;
 holidays = 127;
 cout << "Enter no of holidays : "<<holidays;
 workingDays = 365 - holidays;
 cout << "Working days are : " <<workingDays << endl;
 timeforGames = (workingDays*workplay)+(holidays*holidayplay);
 cout << "Enter time for games : " <<timeforGames <<endl;
 normgame = normgame - timeforGames;
 cout << "Enter time for games : " <<timeforGames <<endl; 
 cout << "Difference : " <<difference <<endl;
 if (holidays <= 109)
 {
  cout << "Tom sleep well" << endl;
 }
 if(holidays >= 110)
 {
  cout << "Tom will run away "
 }
}