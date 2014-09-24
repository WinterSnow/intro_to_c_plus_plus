#include <stdio.h>
#include <iostream>
using namespace std; 

int echo(int, string[]);

int main(){

    int a,i;
    string b[256];
    cout << "Please enter a number for argc: ";
    cin >> a ;
    cout << a <<'\n';
    cin.clear(); cin.sync();
    for(i=1; i<a; i++){
        cout << "Please enter a string for argv: ";
        cout << "i: " << i <<'\n';
        cin >> b[i];
        cin.clear(); cin.sync();    
    }


    cout << echo(a,b);

}

/* echo command-line arguments; 1st version  */
int echo(int argc, string c[])
{
    int i;

    for (i= 1; i< argc; i++){
    //    printf("%s%s", c[i], (i< argc -1)? " ":"");
       cout << c[i] <<'\n';
   }
    printf("\n");
    return 0;
}