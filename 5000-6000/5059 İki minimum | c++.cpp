#include <iostream>

using namespace std;

int main()
{   int i ,n;
    int min1=2000000000,min2=2000000000;
    cin>>n;
    int a[n];

    for (i=0; i<n; i++){
        cin>>a[i];
    }
    min1=a[0];
    for (i=0; i<n; i++){
        do {
        if (a[i]<min1){
        if (min1<min2)
            min2=min1;
        min1=a[i];
        break;
        }
        else if (a[i]<min2){
            if (a[i]!=min1){
                min2 = a[i];
            }}
        }while (false);
    }
    cout << min1 << " "<< min2;
}
