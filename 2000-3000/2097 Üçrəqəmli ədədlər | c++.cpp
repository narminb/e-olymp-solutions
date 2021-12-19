#include <iostream>
using namespace std;
int ferqli(int n){
    int a,b,c;
    a=n/100;
    b=n/10%10;
    c=n%10;
    if (a!=b && b!=c && a!=c)
    return n ;
    else
    return 0;
}
int main(){
    int x,y;
    cin>>x>>y;
    for (int i=x; i<=y; i++){
        if (ferqli(i))
        cout <<i<<endl;
    }
}
