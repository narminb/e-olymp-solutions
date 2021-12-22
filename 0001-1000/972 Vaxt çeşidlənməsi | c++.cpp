#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,d[100],c,n,i;
    cin>>n;
    for (i=0;i<n;i++){
        cin>>a>>b>>c;
        
        d[i]=a*3600+b*60+c;
    }
    sort(d,d+n);
    for (i=0;i<n;i++){
        a=d[i]/3600;
        b=(d[i]%3600)/60;
        c=d[i]%3600%60;
        
        cout<<a<<" "<<b<<" "<<c<<endl;
    }

    return 0;
}
