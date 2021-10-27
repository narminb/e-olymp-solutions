#include <iostream>
#include <cmath>
using namespace std;
int main(){
	long long cem=0,a,n,k;
	cin>>n>>a;
	if (a==1){
		cout << n*(n+1)/2;
	}else {
	
	for (int i=1; i<=n; i++){
		k=pow(a,i)*i;
		cem+=k;
	}cout<<cem;}
}
