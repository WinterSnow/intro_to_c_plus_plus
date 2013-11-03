#include <iostream>
using namespace std; 

double mean(int N, int s[]);
int max(int N, int s[]);
int min(int N, int s[]);

int main() {

	int N;
	int* s= new int [256];	
	int range=0;
	cout << "Please enter the total number of the data points, N: ";
	cin >> N ;
	cin.clear(); cin.sync();

	for (int i = 0; i < N; i++){
		cout << "Please enter the numbers: ";
		cin >> s[i];
		cin.clear(); cin.sync();
	}
	range= max(N,s)-min(N,s);
	cout << "The mean is: ";
	cout << mean(N, s);
	cout << "\nThe maximum value is: ";
	cout << max(N, s);
	cout << "\nThe minimum value is: ";
	cout << min(N, s);
	cout << "\nThe range is: ";
	cout << range;

}

double mean(int N, int s[]){	
	double sum=0.0;
	int k=0;
	for (k=0; k<N; k++){
		sum += s[k];
	}
	return sum / N;
}

int max(int N, int s[]){	
	int max=s[0];
	int k=0;
	for (k=0; k<N; k++){
		if(max>=s[k]){
		} else {
			max= s[k];
		}
	}
	return max;
}

int min(int N, int s[]){	
	int min=s[0];
	int k=0;
	for (k=0; k<N; k++){
		if(min<s[k]){
		} else {
			min= s[k];
		}
	}
	return min;
}