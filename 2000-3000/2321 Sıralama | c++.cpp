#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int mass[n];
    for (int i = 0; i < n; i++) {
        cin >> mass[i];
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 1; j < (n - i);  j++) {
        if (mass[j]  < mass[j-1] ) {
                swap (mass[j-1], mass[j]);
        } 
        else if ( mass[j] == mass[j-1] and mass[j] < mass[j-1]){
            swap (mass[j-1], mass[j]);
        }
        }
    }
 
    for (int i = 0; i < n; i++) {
        cout << mass[i] << " ";
    }
    return 0;
}
