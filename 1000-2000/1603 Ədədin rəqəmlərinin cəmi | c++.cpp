#include <iostream>

using namespace std;

int main()
{
    int n,q,cem=0;
    cin>>n;
    if (n<0)
    n=-n;
    while (n!=0){
        q=n%10;
        cem+=q;
        n=n/10;
    }cout << cem;
}
