#include <iostream>
#include <iomanip>
using namespace std;
double sum(double a, double b){
    return a+b;
}

double power(double a, double b){
    return a*b;
}

int main()
{double t,x,y;
cin>>t;
while(t--){
    cin>>x>>y;
    cout<<fixed<<setprecision(4)<<sum(x,y)<<" "<<power(x,y)<<endl;
}
    
}
