#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int nt(ll n){
    for(int i = 2; i <= sqrt(n); i++ ){
        if(n % i == 0) return 0;
    }
    return 1;
}

int somu(ll n, ll p){
    int cnt = 0;
    for(int i = p; i <= n ; i*=p){
        cnt += n/i;
    }
    return cnt;
}

ll souoc(ll n){
    ll dem = 1;
    for(int i = 2; i <= n; i++){
        if(nt(i)){
            dem *= (somu(n,i) + 1);
            dem %= (int)(1e9 + 7);
        }
    }
    return dem;
}

int main() {
    int n; 
    cin >> n;
    cout << souoc(n) << endl;
    return 0;
}

