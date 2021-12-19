#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int i,n;
    double say=0,cem=0;
    cin>>n;
    double a[n];
    for (i=0; i<n; i++){
    	cin>>a[i];
    	if (a[i]>0){
    		cem+=a[i];
    		say+=1;
		}
	}if (say==0){
		cout<< "Not Found";
	}else
	cout<<fixed<< setprecision(2)<< cem/say;
}
