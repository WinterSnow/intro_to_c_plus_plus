
#include <stdio.h>
#include <iostream>
using namespace std; 

void strcat_pointer(char s[], char t[]);

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
    while (*s!='\0')  /* find the end of s  */ /* checking againtst if it's the end of string is not necessary for the pointer version because the statement is true as long as the character is not the end of the string marker.  */
        s++;
    while ((*s++ = *t++) != '\0')   /*  copy t   */
        ;
}