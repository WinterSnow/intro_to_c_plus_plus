#include <ctype.h>
#include <iostream>
using namespace std; 

void recursive_itoa(int n, char s[]);

int main() {

    int n;
    char* s;
    cout << "Please enter a number for n: ";
    cin >> n ;
}
/* itoa: convert n to characters in s */
void recursive_itoa (int n, char s[])
{
    int i, sign;

    if ((sign = n) < 0){   /* record sign */
        s[0]='-';
        n = -n; /* make n positive */
    }
    if (n/10)
        recursive_itoa (n/10,s);
        s[i++]=(n % 10 + '0'); 

}

