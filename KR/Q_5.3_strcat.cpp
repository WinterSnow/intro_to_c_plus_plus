
#include <stdio.h>
#include <iostream>
using namespace std; 

void strcat_pointer(char s[], char t[]);

/* strindex: return index of t in s, -1 if none */
int main() {

    char a[256];
    char *b= new char [256];
    cout << "Please enter a string for a: ";
    cin >> a ;
    cin.clear(); cin.sync();

    cout << "Please enter a string for b: ";
    cin >> b ;
    cin.clear(); cin.sync();

    strcat(a,b);
    cout << "s: " << a << '\n';

}

/* strcat: concatenate t to end of s; s must be big enough */
void strcat_pointer(char s[],char t[])
{
    while (*s!='\0')  /* find the end of s  */
        s++;
    while ((*s++ = *t++) != '\0')   /*  copy t   */
        ;
}