#include <iostream>

using namespace std;

int main()
{int n,m,i,j,k=0;
cin>>n>>m;
char a[n+1][m+1];
  for(i=1;i<n+1;i++)
  a[i][0]='.';
  for(j=1;j<m+1;j++)
    a[0][j]='.';
    
    
  for(i=1;i<n+1;i++)
        for(j=1;j<m+1;j++){
            cin>>a[i][j];}
  for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(a[i][j]=='#' && a[i][j-1]=='.' && a[i-1][j]=='.' )
            k++;
            
        }}  
       
        cout<<k;
        
}
