#include <iostream>
using namespace std;
int main(){
	int n,m,sayi,qaliq;
	cin>>n>>m;
	sayi=m/n;
	qaliq=m%n;
	if (qaliq!=0){
	    cout<<sayi+1;
	}else{
	    cout<<sayi;
	}
}
