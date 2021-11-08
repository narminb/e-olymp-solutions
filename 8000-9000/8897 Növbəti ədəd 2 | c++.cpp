#include <iostream>

using namespace std;

int main()
{
    long long  n;
    cin>>n;
    if (n==0){
        cout<<10;
    }else if (n%10==0){
        cout<<n+10;
    }
        else{
    
    while(n%10!=0){
        n++;
    }cout<<n;}
    
}
