#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int i,n,say=0;
    cin>>n;
    double a[n],cem=0;

    for (i=0; i<n; i++){
    	cin>>a[i];
    	
    	if (a[i]<0){
    		say+=1;
    		cem+=a[i];
		}
    }
	
	cout<<fixed<< setprecision(2)<<say<<" "<<cem;
}
