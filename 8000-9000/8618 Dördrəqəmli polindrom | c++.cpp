#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if (n/1000==n%10 && n%1000/100==n%100/10){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
