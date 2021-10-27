#include <iostream>
using namespace std;
int main(){
	int n,a,b,c,e;
	cin>>n;
	a=n/1000;
	b=n%1000/100;
	c=n%100/10;
	e=n%10;
	if ((a==3 && b==7) || (b==3 && c==7) || (c==3 && e==7)){
		cout << "YES";
	}else {
		cout<< "NO";
	}}
