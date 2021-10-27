#include <iostream>
using namespace std;
int main(){
	long long n,en_boyuk=0,q;
	cin>> n;
	while(n!=0){
	
		q=n%10;
		if (en_boyuk<=q){
			en_boyuk=q;}
		n=n/10;
	}cout<< en_boyuk;
	
}
