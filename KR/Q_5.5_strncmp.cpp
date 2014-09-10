#include <iostream>
using namespace std; 

int strncmp(char s[], char t[], int n);

int main() {

    char a[256];
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

   
    cout <<  strncmp(a,b,n) << '\n';

}

/* strcmp: return <0 if s< t, 0 if s==t, >0 if s>t  */
int strncmp (char *s, char *t, int n)
{
    int i;

    i = 0;
    cout << " this is " << s[i] << '\n';
    for (i= 0; s[i] == t[i] && i<n-1; i++){
        cout << "s: " << s[i] << '\n';
        cout << "t: " << t[i] << '\n';
        if (s[i] =='\0'){
            return 0;
        }
    }
    return s[i] - t[i];
}