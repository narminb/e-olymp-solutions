#include <iostream>

using namespace std;
int main(){
	int x,sgn;
	cin>>x;
	if (x>0){
		sgn=1;
	}else if (x==0){
		sgn=0;
	}else {
		sgn=-1;
	}
	cout<<sgn;
}
