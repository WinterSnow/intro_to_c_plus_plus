#include <iostream>
using namespace std; 

void strncpy(char s[], char t[], int n);

int main() {

    char a[256];
    char *b= new char [256];
    int n;

    cout << "Please enter a string for b: ";
    cin >> b ;
    cin.clear(); cin.sync();

    cout << "Please enter a number for n: ";
    cin >> n ;

    strncpy(a,b, n);
    cout << "s: " << a << '\n';

}

/* strcpy: copy t to s; array subscript version */
void strncpy (char *s, char *t, int n)
{
    int i;

    i = 0;
    while ((s[i] = t[i])!= '\0'&& i<n-1)
        i++;
}