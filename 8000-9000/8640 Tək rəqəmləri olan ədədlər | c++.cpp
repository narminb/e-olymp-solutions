#include <iostream>
using namespace std;
int main(){
	int a,b,c,d,e,f;
	cin>>a>>b;
	for(int i=a; i<=b; i++){
		c=i/1000;
		d=i%1000/100;
		e=i%100/10;
		f=i%10;
		if (c%2!=0 && d%2!=0 && e%2!=0 && f%2!=0){
			cout<<i<<" ";
		}
	}  
	
}
