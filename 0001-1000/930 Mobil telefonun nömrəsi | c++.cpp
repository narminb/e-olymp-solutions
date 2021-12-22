#include <iostream>
#include <string>
using namespace std;
string s;
int i,j,k,t,n,b[10];

int main()
{
    getline(cin,s);
    n=s.size();
    t=0;
    for (i=0;i<=9;i++){
        k=0;
        for (j=0;j<n;j++)
            if (i==(s[j]-48)){
                k++;
                break;
            }
        if (k==0){
            b[t++]=i;
        }
    }
if (t==0)
  cout <<0;
else {
    cout<< t<<endl;
    for (i=0;i<t;i++)
    cout<<b[i]<<' ';
}
    return 0;
}
