#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll fbn(ll n){
	if(n == 0) return 1;
	ll f1 = 0, f2 = 1, fn;
	for(int i = 3; i <= 93; i++){
		fn = f1 + f2;
		if(fn >= n) return fn;
		f1 = f2;
		f2 = fn;
	}
	return 0;
}

int main() {
	ll n; cin >> n;
	cout << fbn(n) << endl;
    return 0;
}

