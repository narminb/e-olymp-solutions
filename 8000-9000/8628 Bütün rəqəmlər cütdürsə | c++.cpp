#include <iostream>
using namespace std;
int main(){
	int n,a,b,c,e;
	cin>>n;
	a=n/1000;
	b=n%1000/100;
	c=n%100/10;
	e=n%10;
	if (a%2==0 && b%2==0 && c%2==0 && e%2==0){
		cout << "YES";
	}else {
		cout<< "NO";
	}}
