#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a[100000],b[100000],i,j,n,m;
    cin>>n;

    for(i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    for(j=0;j<n-1;j++){
        for(i=0;i<n-1;i++){
            if (b[i+1]>b[i]){
               swap(a[i],a[i+1]);
               swap(b[i],b[i+1]);
            }
            else 
              if (b[i+1]==b[i]){
                  if(a[i+1]<a[i])
                       swap(a[i],a[i+1]);
                       swap(b[i],b[i+1]);                 
              }
        }}
            
    for(i=0;i<n;i++)
      cout<< a[i]<<" "<<b[i]<<endl;
}
