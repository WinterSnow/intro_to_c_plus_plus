#include <iostream>
using namespace std; 

unsigned getbits(unsigned x, int p, int n);

int main() {

	int x, p, n;
	cout << "Please enter a number for x: ";
	cin >> x ;
	cin.clear(); cin.sync();

	cout << "Please enter a number for p: ";
	cin >> p ;
	cin.clear(); cin.sync();

	cout << "Please enter a number for n: ";
	cin >> n ;

	cout << getbits(x, p, n);

}

/* getbits: get n bits from position p */
unsigned getbits(unsigned x, int p, int n)
{
	return (x >> (p+1-n)) & ~ (~0 << n);
}