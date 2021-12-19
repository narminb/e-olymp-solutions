#include <iostream>
using namespace std;
int pow2(int n){
    int p=1;
    while (n%2==0){
        p=p*2;
        n=n/2;
    }return p;
}
int main(){
    int n;
    cin>>n;
    cout << pow2(n);
}
