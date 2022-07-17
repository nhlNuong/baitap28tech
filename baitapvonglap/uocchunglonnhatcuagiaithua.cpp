#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll gt(int n){
	ll tich = 1;
	for(int i = 2; i <= n; i++){
		tich *= i;
	}
	return tich;
}

int main() {
	int a,b; cin >> a >> b;
	int c = min(a,b);
	cout << gt(c) << endl;
    return 0;
}

