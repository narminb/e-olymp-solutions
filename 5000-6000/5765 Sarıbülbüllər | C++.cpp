#include <iostream>
using namespace std;
int main(){
	int n,k,qaliq,tam,min,max;
	cin>>n>>k;
	qaliq=n%k;
	tam=n/k;
	if (qaliq!=0){
		max=n-(k-1);
		min=tam+1;
	}else{
		min=tam;
		max=n-(k-1);
	}
	cout<< min<< " " <<max;
	}
