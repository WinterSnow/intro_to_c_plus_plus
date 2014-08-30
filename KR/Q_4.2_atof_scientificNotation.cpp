#include <ctype.h>
#include <iostream>
using namespace std; 

double atof(char s[]);
int main() {

    double x;
    cout << "Please enter a number for x: ";
    cin >> x ;

    cout << double(x);

}
/* atof: convert string s to double */
double atof(char s[])
{
    double val, power, exp, scientific_sign;
    int i, k, sign;

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

    val= sign * val/ power;

    if (s[i]=='e'||s[i]=='E')
        i++;

    scientific_sign= (s[i] =='-')? -1: 1;
    if (s[i] == '+' || s[i] == '-'){
        i++;
    }
    for (exp = 0.0; isdigit(s[i]);i++)
        exp = 10.0 * exp + (s[i] - '0');
    if (scientific_sign==1)
        while (exp-- >0)
            val *= 10;
    else if (scientific_sign == 0)
        while (exp-- >0)
            val /= 10;
    return val;
}