#include <iostream>
using namespace std;


void squeeze(char s[], char c);

int main() {

	char* c;
	char* s;

	cout << "Please enter a charater: ";
	cin.getline(c,100);

	cin.clear(); cin.sync();

	cout << "Please enter the string to be squeezed: ";
	cin.getline(s,100);

	squeeze(s, c[0]);

	cout << "The squeezed result is " << s;

}

/* squeeze: delete all c from s */
void squeeze(char s[], char c)
{
	int i, j;

	for (i = j = 0; s[i] != '\0'; i++){
		if (s[i] != c){
			s[j++] = s[i];
		}
	}
	s[j] = '\0';
}