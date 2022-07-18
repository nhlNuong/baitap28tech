#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll count(ll n, int p){
	ll cnt = 0;
	for(ll i = p; i <= n; i*=p){
		cnt += n/i;
	}
	return cnt;
}

int main() {
	ll n;int p; cin >> n >> p;
	cout << count(n,p) << endl;
    return 0;
}

