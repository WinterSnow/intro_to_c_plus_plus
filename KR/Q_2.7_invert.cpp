#include <iostream>
using namespace std; 

unsigned invert(unsigned x, int p, int n);

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
	

	cout << invert(x, p, n);

}

/* getbits: get n bits from position p */
unsigned invert(unsigned x, int p, int n)
{
	int a, b, c, d, e, f, g;
	a = x & (~ 0 << p+1);
	b = x & ~ (~ 0<<(p+1-n));
	c = a | b;
	d = x >> (p+1-n);
	e = ~ (d | (~ 0 << n));
	f = e << ( p+1-n);
	return c | f;
}