#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int i,j,n,c,k;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(j=0;j<n-1;j++){
        for(i=0;i<n-1;i++){
            if (a[i+1]%10<a[i]%10)
               swap(a[i+1],a[i]);
            else
               if (a[i+1]%10==a[i]%10)
                  if (a[i+1]<a[i])
                     swap(a[i+1],a[i]);
        }
    }
    for(i=0;i<n;i++)
      cout<< a[i]<<" ";
}
