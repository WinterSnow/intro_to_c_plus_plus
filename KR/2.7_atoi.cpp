#include <iostream>
using namespace std; 

int atoi(char s[]);

int main() {

	char* s= new char [256] ;
	cout << "Please enter a number: ";
	cin >> s ;
 
	cout << atoi(s);

}

/* atoi: convert s to integer */
int atoi(char s[])
{
	int i, n;

	n = 0;
	for (i = 0; s[i] >= '0' &&  s[i] <= '9'; ++i)
		n = 10 * n + (s[i] - '0');
	return n;
}