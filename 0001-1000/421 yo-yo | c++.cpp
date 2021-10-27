#include <iostream>

using namespace std;

int main()
{
    double l,k;
    int say=0;
    cin>>l>>k;
    while(l>k){
        l=l/k;
        say+=1;
    }cout<<say;
}
