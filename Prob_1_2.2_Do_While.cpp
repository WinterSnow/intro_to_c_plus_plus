#include <iostream>
using namespace std; 

int main() {

	int x ;
	cout << "How many times do you want to print out 'Hello, world!'?";
	cin >> x ;
 	
 	int i=0;
 	do {
 		i=i+1;
 		cout << "Hello, world!\n";
 	}
 	while (i<x);
 
	return 0;
}