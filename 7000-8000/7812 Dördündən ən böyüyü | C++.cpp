#include <iostream>
using namespace std;
int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a>=b && a>=c && a>=d){
		cout << a ;
	}else if (b>=a && b>=c && b>=d){
		cout << b;
	}else if (c>=a && c>=b && c>=d){
		cout << c;
	}else if (d>=a && d>=b && d>=c){
		cout << d ;
	}
}
