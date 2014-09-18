#include <iostream>
using namespace std; 

int day_of_year(int year, int month, int day);
void month_day(int year, int yearday, int *pmonth, int *pday);
int main() {

    int a, b, c, d;
    int * e= new int [256];
    int * f= new int [256];


    cout << "Please enter a number for year: ";
    cin >> a ;
    cin.clear(); cin.sync();

    cout << "Please enter a number for month: ";
    cin >> b ;
    cin.clear(); cin.sync();

    cout << "Please enter a number for day: ";
    cin >> c ;       

    cout << "Please enter a number for yearday: ";
    cin >> d ;
    cin.clear(); cin.sync();


    cout <<  day_of_year(a,b,c) << '\n';
    month_day(a,d,e,f);
    cout << "The month is: " << *e<<'\n';
    cout << "The date is: " << *f <<'\n';

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
    if (month <1 || month > 12 || year <1)
        return -1;
    if (day <1 || day > daytab[leap][month])
        return -1;
    for (i= 1; i< month; i++)
        day +=daytab[leap][i];
    return day;
}

/* month_day:  set month, day from day of year  */
void month_day(int year, int yearday, int *pmonth, int *pday)
{
    int i, leap;
    if (year <1){
        *pmonth = -1;
        *pday = -1;
        return;
    }
    leap = (year % 4 == 0 && year % 100 != 0) || year% 400 == 0;
    for (i=1; i<12 && yearday > daytab[leap][i]; i++)
        yearday -=daytab[leap][i];
    if (i>=12 && yearday > daytab[leap][12])
    {
        *pmonth = -1;
        *pday = -1;
    }
    else {
        *pmonth = i;
        *pday = yearday;       
    }
}