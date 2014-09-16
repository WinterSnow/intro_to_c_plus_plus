#include <stdio.h>
#include <string.h>
#include <stdlib.h> // This library is necessary for malloc: http://stackoverflow.com/questions/7006256/how-to-allocate-memory
#include <iostream>
using namespace std; 

#define MAXLINES  1000
char *mainlineptr[MAXLINES];


#define MAXLEN 1000     /* max length of any input line     */
int getline(char *, int);
//char *alloc(int);  // This is not needed
int readlines(char **, int);

int main(){
    char* a[MAXLEN];
    cout << "Please enter several strings separated by the return key: " << "\n";

    int numlines = readlines(mainlineptr, MAXLINES);
    cout << "\n\nHere is what you input:\n";
    for (int i=0; i < numlines; i++){
        cout << mainlineptr[i] << "\n";
    }
}

/* readlines: read input lines  */
int readlines(char *lineptr[], int maxlines)
{
    int len, nlines;
    char *s, line[MAXLEN];

    nlines = 0;
    while ((len = getline(line, MAXLEN))>1){
        if (nlines >= maxlines || (s = (char *)malloc(len)) == NULL) // For Malloc to return a character, it should look like this: http://stackoverflow.com/questions/1963780/when-should-i-use-malloc-in-c-and-when-dont-i
            return -1;
        else {
            line[len-1] ='\0';  /* delete newline  */
            strcpy(s,line);
            lineptr[nlines++]=s;
        }
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