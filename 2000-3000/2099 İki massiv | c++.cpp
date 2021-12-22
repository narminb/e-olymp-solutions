#include <iostream>
using namespace std;

int main(){
    int a[100],b[100],c[100],i,j,k,n,m;
    cin>>n;

    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    for(j=0;j<m;j++)
        cin>>b[j];
        
    k=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)    
            if(a[i]==b[j])
               break;
               
            if (j==m){
                c[k++]=a[i];
        }}
        cout<<k<<endl;
        for(i=0;i<k;i++)
        cout<< c[i]<<" ";
}
