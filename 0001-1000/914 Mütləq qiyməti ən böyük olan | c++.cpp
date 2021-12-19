#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int i,n;
    cin>>n;
    double a[n],max;
    max=a[0];

    for (i=0; i<n; i++){
    	cin>>a[i];
    	
    	if (a[i]<0)
    		a[i]=-a[i];
    	if (a[i]>=max)
    		max=a[i];
		}
	
	cout<<fixed<< setprecision(2)<<max;
}
