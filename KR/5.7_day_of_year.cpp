#include <iostream>
using namespace std; 

int day_of_year(int year, int month, int day);
void month_day(int year, int yearday, int *pmonth, int *pday);
int main() {

    int a, b, c;


    cout << "Please enter a number for year: ";
    cin >> a ;
    cin.clear(); cin.sync();

    cout << "Please enter a number for month: ";
    cin >> b ;
    cin.clear(); cin.sync();

    cout << "Please enter a number for day: ";
    cin >> c ;       
    cout <<  day_of_year(a,b,c) << '\n';

}

static char daytab[2][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

/* day_of_year: set day of year from month & day  */
int day_of_year(int year, int month, int day)
{
    int i, leap;

    leap = (year % 4 ==0 && year%100 !=0) || year %400 == 0;
    for (i= 1; i< month; i++)
        day +=daytab[leap][i];
    return day;
}

/* month_day:  set month, day from day of year  */
void month_day(int year, int yearday, int *pmonth, int *pday)
{
    int i, leap;

    leap = (year % 4 == 0 && year % 100 != 0) || year% 400 == 0;
    for (i=1; yearday > daytab[leap][i]; i++)
        yearday -=daytab[leap][i];
    *pmonth = i;
    *pday = yearday;
}