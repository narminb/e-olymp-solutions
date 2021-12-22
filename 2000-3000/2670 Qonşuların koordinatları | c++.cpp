#include <iostream>

using namespace std;

int main()
{int n,m,x,y;
cin>>m>>n;
cin>>x>>y;

if (x-1>=1)
cout << x-1<<' '<<y<<endl;
if (y-1>=1)
cout << x<<' '<<y-1<<endl;
if (y+1<=n)
cout << x<<' '<<y+1<<endl;
if (x+1<=m)
cout << x+1<<' '<<y<<endl;
}
