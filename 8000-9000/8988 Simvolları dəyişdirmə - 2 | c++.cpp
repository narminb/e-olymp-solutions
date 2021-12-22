#include <iostream> 
using namespace std; 
int main()
{
        int n, i;
        string s;
        getline (cin, s);
        n=s.size(); 
        for(i=0;i<n;i++)
        {
                if(s[i]=='a' && s[i+1]=='b')
                {
                       cout<<"ups";
                       i++;
                }
                else
                cout<<s[i];
        }
        return 0;
}
