#include <iostream>

using namespace std;
int main(){
	int x,y;
	cin>>x;
	if (x>=0){
		y=x*x*x + 2*x*x +4*x - 6;
	}else {
		y=x*x*x - 7*x;
	}
	cout<<y;
}
