
#include <stdio.h>
#include <iostream>
using namespace std; 

int strrindex(char s[], char t[]);

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

    cout << strrindex(a,b);

}


int strrindex(char s[], char t[])
{
    int i, j, k, pos;
    pos= -1;
    for (i=0; s[i] != '\0'; i++){
        for (j=i, k= 0; t[k]!= '\n' && s[j]==t[k]; j++, k++)
            ;
        if (k>0 && t[k] == '\0'){
            pos = i;
        }
    }
    return pos;
}