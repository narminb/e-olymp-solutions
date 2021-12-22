#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    int b=0;
    getline (cin,a);
    
    for (int i=0; i<a.size(); i++){
        if (a[i]=='A' || a[i]=='I' || a[i]=='E' || a[i]=='O' || a[i]=='U' || a[i]=='Y')
        
           b++;
    } 
    cout << b;
}
