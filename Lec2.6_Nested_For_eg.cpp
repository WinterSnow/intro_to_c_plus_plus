#include <iostream>
using namespace std;

int main(){
	for(int x=0; x<4; x=x+1){
		for (int y=0; y<4; y=y+1)
			cout << y;
		cout << "\n";
	}
	return 0;
}