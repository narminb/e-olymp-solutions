#include <iostream>

using namespace std;

int main()
{
    int n,a,k,say=0;
    cin>>n>>a;
    if (n<0)
    n=-n;
    while(n!=0){
        k=n%10;
        if (k==a){
            say+=1;
        }
        n=n/10;
    }cout << say;
    
}
