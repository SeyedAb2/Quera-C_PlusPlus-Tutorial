#include <iostream> 
using namespace std; 
void primeBetweenTwoNumber(int L, int R); 
int main() 
{ 
	int L; 
	int R; 
	cin >> L;
	cin >> R;
	primeBetweenTwoNumber(++L, --R); 
	return 0; 
}
void primeBetweenTwoNumber(int L, int R) 
{ 
	int isPrime; 
	bool addComma = false;
	for (int i = L; i <= R; i++) {
		if (i == 1 || i == 0) 
			continue; 
		isPrime = 1; 
		for (int j = 2; j <= i / 2; ++j) { 
			if (i % j == 0) { 
				isPrime = 0; 
				break; 
			} 
		} 
		if (isPrime == 1) 
			if (addComma){
			    cout << "," << i; 
			}else {
			    cout << i; 
			    addComma = true;
			}
	} 
} 