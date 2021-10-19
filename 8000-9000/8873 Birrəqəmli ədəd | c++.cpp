#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if (n<0){
		n=-n;
	}
	if (n/10==0){
		cout << "Ok";
	}else {
		cout<< "No";
	}
}
