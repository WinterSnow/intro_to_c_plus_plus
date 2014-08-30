#include <math.h> /* for abs function */
#include <ctype.h>
#include <iostream>
using namespace std; 

void recursive_itoa(int n, char s[]);

int main() {

    int n;
    char s[256];
    cout << "Please enter a number for n: ";
    cin >> n ;
    recursive_itoa (n,s);
    cout << s;

}

/* itoa: convert n to characters in s */
void recursive_itoa (int n, char s[])
{
    static int i;

    if (n/10){
        recursive_itoa (n/10,s);
    }
    else {
        i=0;
        if ( n<0)
            s[0]='-';
    }
    s[i++]=abs(n) % 10 +'0'; 
    s[i]='\0';
}

