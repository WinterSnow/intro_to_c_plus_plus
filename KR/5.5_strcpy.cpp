#include <iostream>
using namespace std; 

void strcpy(char s[], char t[]);

int main() {

    char a[256];
    char *b= new char [256];

    cout << "Please enter a string for b: ";
    cin >> b ;

    strcpy(a,b);
    cout << "s: " << a << '\n';

}

/* strcpy: copy t to s; array subscript version */
void strcpy (char *s, char *t)
{
    int i;

    i = 0;
    while ((s[i] = t[i])!= '\0')
        i++;
}