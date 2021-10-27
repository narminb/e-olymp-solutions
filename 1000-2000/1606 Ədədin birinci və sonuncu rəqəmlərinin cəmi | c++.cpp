#include <iostream>

using namespace std;

int main()
{
    int n,birinci_reqem,sonuncu_reqem;
    cin>>n;
    if (n<0)
    n=-n;
    sonuncu_reqem=n%10;
    while (n>=10){
        n=n/10;
    }birinci_reqem=n;
    cout<<birinci_reqem+sonuncu_reqem;
}
