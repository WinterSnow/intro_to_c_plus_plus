#include <iostream>
using namespace std;


int return_1st_location(char s[], char c[]);

int main() {

	char* c = new char[256];
	char* s = new char[256];

	cout << "Please enter a squeezer string: ";
	cin.getline(c,100);
    
	cin.clear(); cin.sync();

	cout << "Please enter the string to be squeezed: ";
	cin.getline(s,100);

	int i;

	int out = return_1st_location(s, c);

    cout << "The squeezed result is " << out;
}


int return_1st_location(char s[], char c[])
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++){
		for (j = 0; c[j] != '\0'; j++){
			if (s[i] == c[j]){
				return i;
			}
		}
	}
	return -1;
}
