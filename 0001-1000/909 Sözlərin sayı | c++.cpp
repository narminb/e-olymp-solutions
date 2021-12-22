#include <iostream>

using namespace std;

int main()
{
    string a;
    int b=0;
    getline (cin,a);
    for (int i=0; i<a.size();i++){
        if (a[i]==' ' && a[i-1]!=' ')
        b++;
    }cout<<b+1;
}
