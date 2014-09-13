#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std; 

#define MAXLINES  5000
char *lineptr[MAXLINES];


#define MAXLEN 1000     /* max length of any input line     */
int getline(char *, int);
char *alloc(int);
int readlines(char **, int);

int main(){
    char** a= new char*[256];
    int n = 10;
    //cout << "Please enter a string for n: ";
    //cin >> n ;
    readlines(a,n);
}

/* readlines: read input lines  */
int readlines(char *lineptr[], int maxlines)
{
    int len, nlines;
    char *p, line[MAXLEN];

    nlines = 0;
    while ((len = getline(line, MAXLEN))>0)
        if (nlines >= maxlines || (p = alloc(len)) == NULL)
            return -1;
        else {
            line[len-1] ='\0';  /* delete newline  */
            strcpy(p,line);
            lineptr[nlines++]=p;
        }
        return nlines;
}

/* getline: read a line, return length */
int getline (char s[], int lim)
{
    int c, i;
    for (i=0; i< lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c=='\n'){
        s[i]= c;
        ++i;
    }
    s[i] = '\0';
    return i;
}