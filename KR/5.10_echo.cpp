#include <stdio.h>
#include <iostream>
using namespace std; 
int echo(int, char **);

int main(){

    int a, i;
    char *b[256];
    cout << "Please enter a number for argc: ";
    cin >> a ;
    cin.clear(); cin.sync();
    cout << a <<'\n';
    b[0]="echo";
    for (i=1; i< a; i++){
        cout << "Please enter a string for argv: ";
        cin >> b[i] ;
        cin.clear(); cin.sync();      
    }


    cout << echo(a,b);

}

/* echo command-line arguments; 1st version  */
int echo(int argc, char *argv[])
{
    int i;

    for (i= 1; i< argc; i++)
        printf("%s%s", argv[i], (i< argc -1)? " ":"");
    printf("\n");
    return 0;
}