#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int i,j,n;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        b[i]=i+1;
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if (a[j]<a[j+1]){
               swap(a[j],a[j+1]);
               swap(b[j],b[j+1]);
            }}}
            
    for(i=0;i<n;i++)
      cout<< b[i]<<" ";
}
