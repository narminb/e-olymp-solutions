#include <iostream>
#include <iomanip>
using namespace std;

double f(double x){
    
    return (x*x*x + 2*x*x -3);
}

int main()
{double t;
while(cin>>t){

    cout<<fixed<<setprecision(4)<<f(t)<<endl;

}}
