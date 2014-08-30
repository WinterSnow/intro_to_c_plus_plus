#include <string.h>  /* for reverse function */

#include <iostream>
using namespace std; 

void recursive_reverse(char s[],int i);

int main() {

    char* s;
    int i;

    cout << "Please enter a string for s: ";
    cin >> s ;
    recursive_reverse(s,0);
}

/* reverse: reverse string s in place */
void recursive_reverse(char s[],int i)
{
    int c, j;
    j= strlen(s) -i-1;
    if (i<j){
        c= s[i];
        s[i]= s[j];
        s[j] = c;
    }    
    recursive_reverse (s, ++i);
}
