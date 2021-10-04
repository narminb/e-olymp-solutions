#include <iostream>
using namespace std;
int main(){
	int n, a, b, c;
	cin >> n;
	a=n/10 ;
	b=n%100/10 ;
	c=n%10;
	cout << (a-(b-c));
}
