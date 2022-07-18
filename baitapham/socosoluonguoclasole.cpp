#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int cp(ll n){
	int tmp = sqrt(n);
	if(1ll*tmp*tmp == n)
		return 1;
	return 0;
}

int main() {
	ll n; cin >> n;
	if(cp(n)) cout << "YES" << endl;
	else cout << "NO" << endl;
    return 0;
}

