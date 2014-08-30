#include <stdio.h>


#include <ctype.h>
#include <iostream>
using namespace std; 

void printd (int n);
int main() {

    int n;
    cout << "Please enter a number for n: ";
    cin >> n ;
}
/* printd: print n in decimal */
void printd (int n)
{
    if (n < 0) {
        putchar('-');
        n = -n;
    }
    if (n/10)       
        printd(n /10);
    putchar(n % 10 + '0');
}