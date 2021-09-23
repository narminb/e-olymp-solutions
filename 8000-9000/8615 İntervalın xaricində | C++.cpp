#include <iostream>
using namespace std;

int main(){
	int x,a,b;
	cin >> x >> a >> b;
	if(x<a or x>b){
		cout << "OUT";
	}else{
		cout << "IN";
	}
}
