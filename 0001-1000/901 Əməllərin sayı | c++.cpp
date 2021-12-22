#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    int b=0;
    getline (cin,a);
    
    for (int i=1; i<a.size(); i++){
        if (a[i]=='+' || a[i]=='-' || a[i]=='*' ){
            if (a[i]!=a[i-1])
               b++;
    } }
    cout << b;
}
