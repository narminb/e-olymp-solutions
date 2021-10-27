#include <iostream>
using namespace std;
int main(){
	long long n,q,hasil=1;
	cin>> n;
	while(n!=0){
		q=n%10;
		if (q!=0){
			hasil*=q;
		}
		n=n/10;
	}

	cout<< hasil;
	
}
