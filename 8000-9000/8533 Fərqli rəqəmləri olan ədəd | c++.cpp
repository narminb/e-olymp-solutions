#include <iostream>
using namespace std;
int main(){
	int a,b,c,d,e,f;
	cin>>a>>b;
	for (int i=a; i<=b; i++){
		c=i/1000;
		d=i%1000/100;
		e=i%100/10;
		f=i%10;
		if (c!=d && c!=e && c!=f && d!=e && d!=f && e!=f){
			cout <<i << " ";
		}
	}
}
