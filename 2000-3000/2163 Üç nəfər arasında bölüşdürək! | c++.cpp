#include <iostream>
#include <string>
using namespace std;
int k;
string a;
int main()
{
    cin>>a;
    for(int i=0;i<a.size();i++)
        k+=a[i]-48;
    
    if(k%3!=0)
      cout<< "NO";
    else 
       cout << "YES";
}
