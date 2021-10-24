#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (n%2!=0 || (n>0 && (n>=100 && n<=999))){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
