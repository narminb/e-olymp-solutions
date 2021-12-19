#include <iostream>
using namespace std;
int f91(int n){
    if (n<=100)
    return 91;
    else 
    return n-10;
}

int main(){
    int n;
    cin>>n;
    cout << f91(n);
}
