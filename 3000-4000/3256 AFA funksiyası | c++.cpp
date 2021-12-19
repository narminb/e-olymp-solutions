#include <iostream>

using namespace std;

int sum(int a[],int n){
     int minx,p,j,i;
     minx=a[0];
    for (i=0; i<n; i++){
        p=0;
       for ( j=i; j<n; j++){
        p+=a[j];
        if (p<minx)
        minx=p;
        
}}return minx;}

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n; i++)
        cin>>a[i];
    
    cout<<sum(a,n);
}
