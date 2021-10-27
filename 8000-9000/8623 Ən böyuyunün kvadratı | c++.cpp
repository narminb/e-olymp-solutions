#include <iostream>
using namespace std;
int main(){
	int n,a,b,c,y;
	cin>>n;
	a=n/100;
	b=n%100/10;
	c=n%10;
	if (a>=b && a>=c && b>=c){
		y=a*100 + b*10 + c;
	}else if (a>=b && a>=c && c>=b){
		y=a*100 + c*10 + b;
	}else if (b>=a && b>=c && a>=c){
		y=b*100 + a*10 + c;
	}else if (b>=a && b>=c && c>=a){
		y=b*100 + c*10 + a;
	}else if (c>=b && c>=a && b>=a){
		y=c*100 + b*10 + a;
	}else if (c>=b && c>=a && a>=b){
		y=c*100 + a*10 + b;}
cout<<y*y;}
