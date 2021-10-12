#include <iostream>
using namespace std;
int main(){
	long long a,b,cem;
	cin>>a>>b;
	cem=0;
	for (int i=a; i<=b; i++){
		if (i%2!=0){
			cem+=i;
		}
	}cout <<cem;
}
