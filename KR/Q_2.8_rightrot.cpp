#include <iostream>
using namespace std; 

unsigned rightrot(unsigned x, int n);

int main() {

	int x, n;
	cout << "Please enter a number for x: ";
	cin >> x ;
	cin.clear(); cin.sync();

	cout << "Please enter a number for n: ";
	cin >> n ;
	cin.clear(); cin.sync();

	cout << rightrot(x, n);

}

unsigned rightrot(unsigned x, int n)
{
	int a, b, c;
	a = x >> n;
	b = x & ~(~ 0 << n);
	c = b << 16-n;
	return a | c;
}