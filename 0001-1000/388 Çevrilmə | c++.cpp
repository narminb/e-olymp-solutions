#include <iostream>
using namespace std;
int main(){
    int n,say=0;
    cin>>n;
    while(n!=1){
        if (n%2==0){
            n=n/2;
            say+=1;
        }else{
            n+=1;
            say+=1;
        }
    }cout<<say;
}
