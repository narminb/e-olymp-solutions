#include <iostream>
#include <locale> 
#include <string>
using namespace std;
int main ()
{
        string a;
        int n, m;

        getline (cin, a);
        cin>>n>>m;
        for(int i=0; i < a.size(); i++)
        {
                if(i<n || i>m)
                        cout<<a[i];
        }

}
