#include <iostream>

using namespace std;

int main()
{
    int n,a,b,c,d,e;
    cin>>n;
    a=n/10000;
    b=n%10000/1000;
    c=n%1000/100;
    d=n%100/10;
    e=n%10;
    if ((a<b && a<c && a<d && a<e) && (b<c && b<d && b<e) && (c<d && c<e) && (d<e)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
