#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    if (x<0)
    x=-x;
    cout<< x/100<< endl;
    cout<< x/10%10 << endl;
    cout<<x%10;
}
