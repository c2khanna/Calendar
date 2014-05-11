#include <string>
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

//Determine Function Prototypes
void DetermineWeekDay(float, float, float, int, int, int, int, int&);


int main()
{

//Input variables
float day;
float month;
float year;
int DayofWeek;
int intRes1 = 0;
int intRes2 = 0;
int intRes3 = 0;
int JDN = 0;
bool dataOK = false;
do

{
cout << "Please enter the month ";
cin >> month;
cout << "Please enter the week day: ";
cin >> day;
cout << "Please enter the year: ";
cin >> year;

if (month<13)
dataOK = true;
else
cout << "Please enter a number less than 13 for the month: "
<< endl;
if (day<32);
else
cout << "Please enter a number less than 32 for the day: "
<< endl;

if((year>1582) || //Picks any years from Gregorian Calendar greater than 1582
(month>10) && (year==1582) || //Picks months greater than 10 in 1582 from Gregorian Calendar
(month== 10) && (day>15) && (year== 1582)) // Picks only month 10 and any days over 15 in year 1582 from Gregorian Calendar


{
// do calculation
}

} while (dataOK== false);



DetermineWeekDay (day, month, JDN, year, intRes1, intRes2, intRes3, DayofWeek);
cin.get(), cin.get();
return 0;
}

void DetermineWeekDay (float day,float month,float year, int JDN, int intRes1,
int intRes2, int intRes3,int& DayofWeek)

{
//Precondition: The day of the week must be entered.
//Postcondition: The user must enter information correctly.


intRes1 = (2-year / 100 + year / 400);
intRes2 = int(365.25 * year);
intRes3 = int(30.6001 * (month + 1));
JDN = ((intRes1 + intRes2 + intRes3 + day) + 1720944.5);
DayofWeek = ((JDN + 3) % 7);

cout << " The day of the week for "
<< "month "<<"day "<<"year " << "is" << DayofWeek;
if (DayofWeek == 0)
cout << " Monday";
else if (DayofWeek == 1)
cout << " Tuesday";
else if (DayofWeek == 2)
cout << " Wednesday";
else if (DayofWeek == 3)
cout << " Thursday";
else if (DayofWeek == 4)
cout << " Friday";
else if (DayofWeek == 5)
cout << " Saturday";
else if (DayofWeek == 6)
cout << " Sunday";
cout << endl;

return;

} 