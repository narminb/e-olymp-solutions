#include <iostream>
#include <algorithm>

using namespace std;

int main()
{int i,n,max=0,k=0;
cin>>n;
int a[n];
for (i=0;i<n;i++){
    cin>>a[i];
}
for (i=0;i<n;i++){
    if (a[i]>0)
    k++;
    else{
        if (k>max)
        max=k;
        k=0;
    }
}if (k>max)
max=k;
cout<<max;
 

    return 0;
}
