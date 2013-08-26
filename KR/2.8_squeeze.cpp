#include <iostream>
using namespace std; 

void squeeze(char s[], int c);

int main() {

	char* s;
	char c;

	cout << "Please enter a charater: ";
	cin >> c ;

	cout << "Please enter a string: ";
	cin >> s ;



	squeeze(s,c);

	cout << "The squeezed result is " << s;

}

/* squeeze: delete all c from s */
void squeeze(char s[], int c)
{
	int i, j;

	for (i = j = 0; s[i] != '\0'; i++){
		if (s[i] != c){
			s[j++] = s[i];
		}
	}
	s[j] = '\0';
}