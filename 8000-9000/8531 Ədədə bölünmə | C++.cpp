#include <iostream>

using namespace std;
int main(){
	int n,a,b;
	cin>>n>>a>>b;
	if (n%a==0 && n%b==0){
		cout<< "YES";
	}else{
		cout<<"NO";
	}
}
