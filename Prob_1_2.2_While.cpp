#include <iostream>
using namespace std; 

int main() {

	int x ;
	cout << "How many times do you want to print out 'Hello, world!'?";
	cin >> x ;
 	
 	int i=0;
 	while (i<x){
		cout << "Hello, world!\n";
		i=i+1;
	}
 
	return 0;
}