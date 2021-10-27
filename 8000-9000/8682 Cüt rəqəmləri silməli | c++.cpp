#include <iostream>
using namespace std;
int main(){
	long long p=1,s=0,n,q;
	cin>>n;
	while(n!=0){
	    q=n%10;
	    if (q%2==0){
	        n=n/10;
	    }else{
	        s=s+q*p;
	        p=p*10;
	        n=n/10;
	    }
	    
	}cout<<s;
	      return 0;
	}
