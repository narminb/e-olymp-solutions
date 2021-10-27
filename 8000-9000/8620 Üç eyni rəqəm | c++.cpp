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
    if ((a==b && a==c && a!=d) || (a==c && a==d && a!=b) || (a==b && b==d && a!=c) || (b==c && b==d && a!=b)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
