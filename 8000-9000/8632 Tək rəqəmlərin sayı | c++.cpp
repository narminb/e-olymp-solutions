#include <iostream>
using namespace std;
int main(){
	long long n,q,say=0;
	cin>> n;
	while(n!=0){
		q=n%10;
		if (q%2!=0){
			say+=1;
		}
		n=n/10;
	}

	cout<< say;
	
}
