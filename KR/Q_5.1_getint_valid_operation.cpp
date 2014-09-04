#include <ctype.h>

#include <iostream>
using namespace std; 

int getch(void);
void ungetch(int);
int getint(int *pn);


int main() {

    int* x = new int[256];
    cout << "Please enter input: ";
    getint(x);

    cout << *x <<'\n';

}
/* getint: get next integer from input into *pn */
int getint(int *pn)
{
    int c, d, sign;

    while (isspace(c = getch()))    /* skip white space */
        ;
    if (!isdigit(c) && c != EOF && c !='+' && c !='-'){
        ungetch(c);     /* it's not a number */
        return 0;
    }
    sign = ( c == '-') ? -1: 1;
    if (c == '+' || c == '-'){
        d=c;
        cout << "d:"<< d <<'\n';
        if(!isdigit(c=getch())){
            cout<< "c: in question"<< c<<'\n';
            if (c!=EOF)
                ungetch(c);
            ungetch(d);
            cout << "d2:"<< d<< '\n';
            *pn=d;
            return d;
        }
    }
    for (*pn = 0; isdigit (c); c = getch())
        *pn = 10 * *pn + (c - '0');
    *pn *= sign;
    if (c != EOF)
        ungetch(c);
    return c;
}
#define BUFSIZE 100

char buf[BUFSIZE];  /* buffer for ungetch */
int bufp = 0;       /* next free posiiton in buf */

int getch(void)     /* get a (possibly pushed back) character */
{
//  cout << "buffer bufp: " << bufp << '\n';
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch (int c)/* push character back on input */
{
    if ( bufp >= BUFSIZE){
        printf("ungetch: too many characters\n");
    } else {
        buf[bufp++] = c;
    }
}