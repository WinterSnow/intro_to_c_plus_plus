#include <string.h>  /* for reverse function */

#include <iostream>
using namespace std; 

void reverse(char s[]);
void recursive_reverse(char s[],int i, int len);

int main() {

    char* a = new char [256];

    cout << "Please enter a string for a: ";
    cin >> a ;
    recursive_reverse(a,0, strlen(a));
    cout << "\n\nFinal Result: " << a << "\n\n";
}


/* reverse: reverse string s in place */
void recursive_reverse(char s[],int i, int len)
{
    int c, j;
    j= len -i-1;

    if (i<j){
        cout << "Starting the re-assignment\n";
        cout << "i: " << i << "\n"; 
        cout << "j: " << j << "\n"; 
        cout << "s: " << s << "\n"; 
        c= s[i];
        s[i]= s[j];
        s[j] = c;
        cout << "Assignment successful\n";
        cout << "i: " << i << "\n"; 
        cout << "j: " << j << "\n"; 
        cout << "s: " << s << "\n"; 
        recursive_reverse (s, ++i, len);
    }
}
