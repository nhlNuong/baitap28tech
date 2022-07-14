#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool check(ll n){
	if(n == 0 || n == 1) return 1;
	ll f1 = 0, f2 = 1, fn;
	for(int i = 3; i <= 93; i++ ){
		fn = f1 + f2;
		if(fn == n) return 1;
		f1 = f2;
		f2 = fn;
	}
	return 0;
}

int main() {
	int t; cin >> t;
	while(t--){
		ll n;
		cin >> n;
		if(check(n)) cout << "YES\n";
		else cout << "NO\n";
	}
    return 0;
}

