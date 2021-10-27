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
    if (a==b or a==c or a==d or a==e or b==c or b==d or b==e or c==d or c==e or d==e){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
