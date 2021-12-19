#include <iostream>
using namespace std;
 
int sumOfDigits(int a){
	int sum = 0;
	while (a > 0){
		sum += a%10;
		a /= 10;
	}
	return sum;
}
 
int main() {
	int m, n, sumMin, counter = 1;
	cin >> m >> n;
	sumMin = sumOfDigits(m);
	for(int i = m + 1; i <= n; i++){
		if (sumOfDigits(i) < sumMin){
			sumMin = sumOfDigits(i);
			counter = 1;
		}
		else if (sumOfDigits(i) == sumMin)   
		    counter++;
	}
	cout << counter;
	return 0;
}
