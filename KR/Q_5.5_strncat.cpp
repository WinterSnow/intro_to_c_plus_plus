
#include <stdio.h>
#include <iostream>
using namespace std; 

char* strncat(char s[], char t[], int n);

int main() {

    char a[512];
    char *b= new char [256];
    int n;

    cout << "Please enter a string for a: ";
    cin >> a ;
    cin.clear(); cin.sync();

    cout << "Please enter a string for b: ";
    cin >> b ;
    cin.clear(); cin.sync();
    cout << "Please enter a number for n: ";
    cin >> n ;

    cout << "s2: " <<strncat(a,b,n)<<'\n';

}

/* strcat: concatenate t to end of s; s must be big enough */
char* strncat(char s[],char t[], int n)
{   int i,j;
    i=0;
    j=0;
    while (s[i]!='\0'){  /* find the end of s  */ /* checking againtst if it's the end of string is not necessary for the pointer version because the statement is true as long as the character is not the end of the string marker.  */
        cout << "s: " << *s<< '\n';
        cout << "i: " << i<< '\n';
        i++;
    }
    while ((s[i] = t[j]) != '\0' && j < n-1){   /*  copy t   */
        cout << "i: " << i<< '\n';
        cout <<
        i++;
        j++;

    }
    return s; 
}