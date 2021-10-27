#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    if (n<0)
    n=-n;
    if (n/10==0)
        cout<<n;
    else{    
        while(n>=10){
           n=n/10;
    }cout << n;
}
    
}
