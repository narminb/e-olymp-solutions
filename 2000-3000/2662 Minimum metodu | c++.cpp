#include <bits/stdc++.h>  //butun kitabxanalari evez edir

using namespace std;

int main()
{
    int n;
    int a[100];
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int k = a[0];
    int say = 0;
    for (int i=0;i<n;i++){
        int min = i;
        for (int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min = j;
            }
        }
        if (min != i){
            if (a[i]==k || a[min]==k){
                say++;
            }
            int komekci = a[i];
            a[i] = a[min];
            a[min] = komekci;
        }
    
    }
    cout<<say;
    
    return 0;
}
