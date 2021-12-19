#include <iostream>
#include <iomanip>
using namespace std;

int main()
{int  n,i,k=0;
    cin>>n;
    double a[n];
    for (i=0; i<n; i++){
        cin>>a[i];
        if (a[i]<=2.5){
            cout <<fixed<< setprecision(2)<< i+1<<" " <<a[i];
            k=1;
            break;
        }}if (k==0)
            cout << "Not Found";
        
}
