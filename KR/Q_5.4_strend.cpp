
#include <stdio.h>
#include <iostream>
using namespace std; 

int strend(char s[], char t[]);

int main() {

    char a[256];
    char *b= new char [256];
    cout << "Please enter a string for a: ";
    cin >> a ;
    cin.clear(); cin.sync();

    cout << "Please enter a string for b: ";
    cin >> b ;
    cin.clear(); cin.sync();

    cout<< strend(a,b) << '\n';

}

/* strend: returns 1 if the string t occurs at the end of the string s, and zero otherwise. */
int strend(char s[],char t[])
{
    for ( ;*(s+strlen(s)-strlen(t)) == *t;s++, t++){
        cout << "s: " << s<<'\n';
        cout << "t: " << t << '\n';
        while(*s!='\0')
            return 1;
    }
    return 0;
}