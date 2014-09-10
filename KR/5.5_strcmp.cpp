#include <iostream>
using namespace std; 

int strcmp(char s[], char t[]);

int main() {

    char a[256];
    char *b= new char [256];

    cout << "Please enter a string for a: ";
    cin >> a ;
    cin.clear(); cin.sync();

    cout << "Please enter a string for b: ";
    cin >> b ;

   
    cout <<  strcmp(a,b) << '\n';

}

/* strcmp: return <0 if s< t, 0 if s==t, >0 if s>t  */
int strcmp (char *s, char *t)
{
    int i;

    i = 0;
    cout << " this is " << s[i] << '\n';
    for (i= 0; s[i] == t[i]; i++){
        cout << "s: " << s[i] << '\n';
        cout << "t: " << t[i] << '\n';
        if (s[i] =='\0'){
            return 0;
        }
    }
    return s[i] - t[i];
}