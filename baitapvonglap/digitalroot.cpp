#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll tong(ll n){
	ll sum = 0;
	while(n){
		sum += n%10;
		n/=10;
	}
	return sum;
}

int main() {
	ll n; cin >> n;
	ll sum = tong(n);
	while(sum >= 10){
		sum = tong(sum);
	}
	cout << sum << endl;
    return 0;
}

