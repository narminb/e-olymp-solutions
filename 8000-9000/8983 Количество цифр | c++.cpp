#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[10000];
    int n,k=0;
    cin>>s;
    n=strlen(s);
    for (int i=0;i<n;i++){
        if(isdigit(s[i])){
            k++;
        }
    }

    cout<<k;
    
	return 0;
}
