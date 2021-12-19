#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a; cin >> a;
	a = a / 100 + a / 10 % 10 + a % 10;
	cout << fixed << sqrt(a) ;
}
