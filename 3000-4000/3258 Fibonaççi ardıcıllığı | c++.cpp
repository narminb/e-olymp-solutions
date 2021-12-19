#include <iostream>

using namespace std;
 #define ll long long 
 
 ll fibo(ll n){
     if (n<=1)
     return n;
     
     return fibo(n-2)+fibo(n-1);
 }
 int main(){
     int n;
     cin>>n;
     cout<<fibo(n);
 }
