#include <iostream>
using namespace std;

int main()
{
   long n,i,l,j,f=1,k;
   while(cin>>n)
   {
       k=n-1;
       for(i=1;i<=n;i++)
       {
           for(j=1;j<=n-i;j++)
           cout<<" ";
           for(j=1;j<=2*i-1;j++)
           cout<<"*";
           cout<<endl;
       }
       k=2*k-1;
       for(i=1;i<=n-1;i++){
           for(j=1;j<=i;j++)
           cout<<" ";
           for(j=1;j<=k;j++){
               cout<<"*";
           }
           k=k-2;
           cout<<endl;
       }
       if(n==0)
       break;
       else 
       cout<<endl;
   }
   return 0;
}
