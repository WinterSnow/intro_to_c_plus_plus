#include <iostream>
using namespace std; 

int htoi(char s[]);

int main() {

	char* s= new char [256] ;
	cout << "Please enter a number: ";
	cin >> s ;
 
	cout << htoi(s);

}

/* htoi: convert hexademical s to integer */
int htoi(char s[])
{
	int i, n, c;

	n = 0;

	for (i = 0; s[i] != '\0'; ++i){
		if (s[i] >= '0' &&  s[i] <= '9') {
			c = s[i] - '0';
		}
		else if (s[i] >= 'A' && s[i] <= 'F'){
			c = s[i] - 55;
		}
		else if (s[i] >= 'a' && s[i] <= 'f'){
			c = s[i] - 87;
		}
		else if (s[i] == 'x' || s[i] == 'X'){
			c = 0;
		}
		n = 16 * n + c;
	}
	return n;
}
