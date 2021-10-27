#include <iostream>

using namespace std;

int main()
{
    int n,q,k=0;
    cin>>n;
    while (n!=0){
        q=n%2;
        if (q==1){
            k+=1;
        }
        n=n/2;
    }cout << k;
}
