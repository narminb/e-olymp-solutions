#include <iostream>
using namespace std;
int main(){
	int x,y;
	cin>>x;
	if (x<-4){
		y=x+5;
	}else if (-4<=x && x<=7){
		y=x*x-3*x;
	}else{
		y=x*x*x+2*x;
	}
	cout<<y;

}
