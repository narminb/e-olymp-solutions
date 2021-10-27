#include <iostream>
using namespace std;
int main(){
	int a,b,d,e,f;
	cin>>a>>b;
	for(int i=a; i<=b; i++){
	
		d=i/100;
		e=i%100/10;
		f=i%10;
		if (d*d*d + e*e*e + f*f*f==i){
			cout<<i<<" ";
		}
	}  
	
}
