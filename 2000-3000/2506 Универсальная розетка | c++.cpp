#include <iostream>

using namespace std;

int main()
{
    int i,j,n;
    double d,s;
    cin>>n>>d;
    double x[n],y[n],t[n];

    for (i=0; i<n; i++){
        cin>>x[i]>>y[i]>>t[i];
    }
     
    for (i=0; i<n-1; i++){
        for (j=i+1; j<n; j++){
            s=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
            if (d*d==s && t[i]!=t[j]){
                cout<<"Yes";
                 return 0;
            }
        }
    }
    
  
    cout <<"No" ;
    return 0;

}
