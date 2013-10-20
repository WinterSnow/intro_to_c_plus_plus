#include <iostream>
using namespace std; 

unsigned setbits(unsigned x, int p, int n, unsigned y);

int main() {

	int x, p, n, y;
	cout << "Please enter a number for x: ";
	cin >> x ;
	cin.clear(); cin.sync();

	cout << "Please enter a number for p: ";
	cin >> p ;
	cin.clear(); cin.sync();

	cout << "Please enter a number for n: ";
	cin >> n ;
	cin.clear(); cin.sync();

	cout << "Please enter a number for y: ";
	cin >> y ;
	cin.clear(); cin.sync();	

	cout << setbits(x, p, n, y);

}

/* getbits: get n bits from position p */
unsigned setbits(unsigned x, int p, int n, unsigned y)
{
	int a, b, c, d, e;
	a = x & (~ 0 << p+1);
	b = x & ~ (~ 0<<(p+1-n));
	c = a | b;
	d = y & ~ (~ 0 << n);
	e = d << (p+1-n);
	return c | e;
}