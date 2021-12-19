#include <iostream>

using namespace std;

long long  f(long long  x){
    
    return (1+x+x*x);
}

int main()
{long long t;
cin>>t;
cout<<f(t);

}
