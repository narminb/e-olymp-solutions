#include <iostream>
using namespace std;
int main(){
	int n,m,k,otaq_o,otaq_q;
	cin>>n>>m>>k;
	if (n%k!=0){
		otaq_o=n/k+1;
	}else{
	    otaq_o=n/k;
	}
	if (m%k!=0){
		otaq_q=m/k+1;
	}else{
		otaq_q=m/k;
	}
	cout<<otaq_o+otaq_q;
}
