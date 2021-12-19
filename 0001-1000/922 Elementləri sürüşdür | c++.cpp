#include <iostream>
using namespace std;

int main(){
    int i,n;
    cin>>n;
    int a[n];
    
    for (i=0; i<n; i++){
    	cin>>a[i];}
 	int k=a[n-1];
	for (i=n-1; i>=0; i--){
	    a[i]=a[i-1]; }
   
    a[0]=k;
	       
    for (i=0; i<n; i++){
    	cout<<a[i]<<" ";
	
}}
