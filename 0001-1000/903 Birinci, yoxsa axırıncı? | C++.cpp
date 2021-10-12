#include <iostream>
using namespace std;
int main(){
	int a,r1,r2;
	cin >> a;
	r1=a/100;
	r2=a%10;
	if (r1>r2){
		cout<< r1;
	}else if (r1==r2){
		cout<< "=";
	}else{
		cout<<r2;
	}
}
