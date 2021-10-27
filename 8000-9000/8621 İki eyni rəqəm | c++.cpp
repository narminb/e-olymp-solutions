#include <iostream>

using namespace std;

int main()
{
    int n,a,b,c,d,e;
    cin>>n;
    a=n/1000;
    b=n%1000/100;
    c=n%100/10;
    d=n%10;
    if ((a==b and c==d and a!=c) or (a==c and b==d and a!=b) or (a==d and b==c and a!=b)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
