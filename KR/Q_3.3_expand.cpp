#include <iostream>
using namespace std; 

char* expand(char s1[], char s2[]);

int main() {

	char* s1= new char [256] ;
	char* s2= new char [256] ;
	cout << "Please enter the shorthand notation: ";
	cin >> s1 ;
 	cout << "The complete list is: ";
 	cout << expand (s1, s2);

}

/* htoi: convert hexademical s to integer */
char* expand(char s1[], char s2[])
{
	int i, s2_index;
	bool non_dash_seen = false;

	// For every character in the string s1
	for (i = 0, s2_index = 0; s1[i] != '\0'; i++){

		//if the character is not a dash
		if (s1[i] !='-'){

			// Write the character to c
			s2[s2_index]=s1[i];
			s2_index +=1;
			non_dash_seen = true;

		}  else if (s1[i] == '-' && non_dash_seen == false){
			// The line below can be replaced by the line above to work for multiple leading dashes. We need to take bool non-dash_seen = false out of comment to do so.  
		//	else if (s1[i] == '-' && i==0){ 
			s2[s2_index]=s1[i];
			s2_index +=1;	

		} else if (s1[i] =='-' && s1[i+1] =='\0'){
			s2[s2_index]=s1[i];
			s2_index += 1;
			s2[s2_index]='\0';			
		}
		else { // if the character is a dash at position i
			// Get the letter before the dash
			int letterBefore = s1[i-1];
			// Get the letter after the dash
			int letterAfter = s1[i+1];
			// For every character between the two letters around the dash
			for (int k = 0;k < letterAfter - letterBefore-1; k++){
				// Write this character to c.
				s2[s2_index]=letterBefore+k+1;
				s2_index +=1;
			}
		}
	}
	return s2;
}
