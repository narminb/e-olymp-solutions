#include <locale>
#include <iostream>
#include <string>

using namespace std;

int main()
{   
        string a;
        string b;
        int n,i,m,k=0;
    
        getline(cin,a);
        getline(cin,b);
        n=a.size();
        m=b.size();
        
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                    if(b[i]==a[j])
                    {
                            k++;
                            a[j]='*';
                            break;
                    }
                    
        if(k==m)
               cout<<"Ok";
        else
               cout<<"No";
           
    return 0;
}
