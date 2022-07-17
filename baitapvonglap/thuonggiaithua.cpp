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
	double thuong = 1;
	for(int i = 1; i < n; i++){
		thuong += 1.0 / gt(i);
	}
	cout << fixed << setprecision(4) << thuong << endl;
    return 0;
}

