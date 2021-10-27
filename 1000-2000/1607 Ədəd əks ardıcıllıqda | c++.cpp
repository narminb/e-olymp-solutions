#include <iostream>
using namespace std;
int main(){
	long long n,q;
	cin>>n;
	if (n==0){
		cout << 0;
	}
	while(n!=0){
		q=n%10;
		cout<<q;
		n=n/10;
	}
}
