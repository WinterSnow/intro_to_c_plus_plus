#include <iomanip> /* for cout setprecision */
#include <ctype.h>
#include <iostream>
using namespace std; 

double atof(char s[]);
int main() {

    char* x = new char[256];
    cout << "Please enter a number for x: ";
    cin >> x ;
    cout << atof(x) << '\n'; /* this line can be replaced by the following two lines below to output a double with precision 4. */
//    cout << fixed << setprecision(4);
//    cout << atof(x) << endl;

}
/* atof: convert string s to double */
double atof(char s[])
{
    double val, power;
    int i, sign;

    for (i= 0; isspace(s[i]);i++)  /* skip white space */
    ;
    sign = (s[i] == '-') ? -1: 1;
    if( s[i] == '+' || s[i] == '-')
        i++;
    for (val = 0.0; isdigit(s[i]);i++)
        val = 10.0 * val + (s[i] - '0');
    if (s[i] == '.')
        i++;
    for (power =1.0; isdigit(s[i]);i++){
        val = 10.0 * val + (s[i] - '0');
        power *= 10.0;
    }
    return sign * val/ power;
}