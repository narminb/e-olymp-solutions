#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;
char s[257];
int i,n,l,r;
int main()
{   gets(s);
   n=strlen(s);
   l=0;
   while(l<n && s[l]==' ')
       l++;
   r=n-1;
   while(r>=0 && s[r]==' ')
       r--;
    for(i=l;i<=r;i++)
       if(s[i]!=' ' || (s[i]==' ' && s[i-1]!=' '))
           cout<<s[i];
    cout<<endl;
}
