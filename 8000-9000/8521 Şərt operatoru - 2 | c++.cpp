#include <iostream>
using namespace std;
int main(){
	long long x,y;
	cin >> x ;
	if (x>=10){
		y=x*x*x+5*x;
	}else{
		y=x*x-2*x+4;
	}
	cout<<y;
}
