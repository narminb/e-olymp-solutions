#include <iostream>

using namespace std;

int main()
{int n,i,j;
cin>>n;
int a[n][n];
  for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i+j==n-1)
            a[i][j]=0;
            else if(i+j<n-1)
            a[i][j]=2;
            else if(i+j>=n)
            a[i][j]=1;
        }}  
        for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        cout<<a[i][j];
        cout<<endl;
        }
}
