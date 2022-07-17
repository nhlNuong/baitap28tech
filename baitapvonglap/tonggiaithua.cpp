#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll gt(int n){
	ll tich = 1;
	for(int i = 2; i <= n; i++){
		tich *= 1ll*i;
	}
	return tich;
}

int main() {
	int n; cin >> n;
	ll tong = 0;
	for(int i = 1; i <= n; i++){
		tong += gt(i);
	}
	cout << tong << endl;
    return 0;
}

