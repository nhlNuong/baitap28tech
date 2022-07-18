#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    ll a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j<=i; j++){
            if(j == 0 || j == i) a[i][j] = 1;
            else {
                a[i][j] = a[i-1][j-1] + a[i-1][j];
                a[i][j] %= (int)(1e9 + 7);
            }
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

