#include <iostream>
#include <string>
#include <locale>
using namespace std;

int main()
{
    string a;
    int b=1;
    getline (cin,a);
    
    for (int i=1; i<a.size(); i++){
        if (a[i]==' '){
           if (a[i-1]!=' ' && a[i-1]!='-')
           b++;
    } }
    cout << b;
}
