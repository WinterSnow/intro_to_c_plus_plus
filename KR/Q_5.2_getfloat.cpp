#include <ctype.h>

#include <iostream>
using namespace std; 

int getch(void);
void ungetch(int);
int getint(float *pn);


int main() {

    float* x = new float[256];
    cout << "Please enter input: ";
    getint(x);

    cout << *x <<'\n';

}
/* getint: get next integer from input into *pn */
int getint(float *pn)
{
    int c, sign;
    float power;

    while (isspace(c = getch()))    /* skip white space */
        ;
    if (!isdigit(c) && c != EOF && c !='+' && c !='-'&& c!='.'){
        ungetch(c);     /* it's not a number */
        return 0;
    }
    sign = ( c == '-') ? -1: 1;
    if (c == '+' || c == '-')
        c= getch();
    for (*pn = 0.0; isdigit (c); c = getch())
        *pn = 10.0 * *pn + (c - '0');
    if (c == '.')
        c= getch();
    for (power = 1.0; isdigit (c); c = getch()){
        *pn = 10.0 * *pn + (c - '0');
        power *= 10.0;
    }
    *pn *= sign/power;
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