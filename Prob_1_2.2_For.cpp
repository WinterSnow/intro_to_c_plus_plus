#include <iostream>
using namespace std; 

int main() {

	int x ;
	cout << "How many times do you want to print out 'Hello, world!'?";
	cin >> x ;
 	
 	for (int i=0;i<x;i++)
		cout << "Hello, world!\n";
 
	return 0;
}