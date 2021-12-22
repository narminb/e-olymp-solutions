#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int i,j,n,k,c,a[1000];
    cin>>n;
    for (i=0;i<n;i++)
        cin>>a[i];
       
         for (i=1;i<n;i++)
         {
             k=0;
             for (j=i-1;j>=0;j--)
             if (a[i]<a[j])
             {c=a[i]; a[i]=a[j]; a[j]=c; i=j; k=1;}
                 else 
                   break;
            if (k==1)
            {
                for (j=0;j<n-1;j++)
                  cout << a[j]<<" ";
                cout <<a[n-1]<<endl;
                
            }
         }
             
    return 0;
}
