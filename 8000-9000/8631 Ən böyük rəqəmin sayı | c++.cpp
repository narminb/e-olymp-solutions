#include <iostream>
using namespace std;
int main(){
	long long n,max=0,q,k=1;
	cin>> n;
	while(n!=0){
	
		q=n%10;
		if (max<q){
			max=q; k=1;
		    
		}
		else if (max==q){
		   k++;
		}
		n=n/10;
	}cout<< k;
	
}
