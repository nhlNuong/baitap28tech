#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll luythua(ll a, ll b){
	ll res = 1;
	int m = (int)(1e9+7);
	while(b){
		a%=m;
		if(b%2==1){
			res *= a;
			res %= m;
		}
		a *= a;
		b/=2;
	}
	return res;
}

int main() {
	ll a,b; cin >> a >> b;
	cout << luythua(a,b) << endl;
    return 0;
}

