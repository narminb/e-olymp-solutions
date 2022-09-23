#include <iostream>
using namespace std;

int GCD(int a,int b)
{
    if(b==0)
      return a;
    return GCD(b,a%b);
}   
int main()
{
    int n,a,b,i;
    cin>>n;
    cin>>a;
    for(i=2;i<=n;i++)
    {
        cin>>b;
        a=GCD(a,b);
    }
    cout<<a;
}
