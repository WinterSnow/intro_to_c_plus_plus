
#include <stdio.h>
#include <iostream>
using namespace std; 

void strcat(char s[], char t[]);

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
void strcat(char s[],char t[])
{
    int i, j;
    i = j = 0;
    while (s[i]!='\0')  /* find the end of s  */
        i++;
    while ((s[i++] = t[j++]) != '\0')   /*  copy t   */
        ;
}