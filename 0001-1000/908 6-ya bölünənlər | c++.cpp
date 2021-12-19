#include <iostream>

using namespace std;

int main()
{
    int n,i,say=0,cem=0;
    cin>>n;
    int a[n];
    for (i=0; i<n; i++){
        cin>>a[i];
        if (a[i]%6==0 && a[i]>0){
        cem+=a[i];
        say+=1;
    }}
    cout<<say<< " "<<cem;}
