#include <iostream>

using namespace std;

int main()
{
    int n,a,b,c,d;
    cin>>n;
    a=n/1000;
    b=n%1000/100;
    c=n%100/10;
    d=n%10;
    if ((a!=0 && b!=0 && c!=0 && d!=0) && (n%a==0 && n%b==0 && n%c==0 && n%d==0)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
