#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll fbn(ll n){
	if(n == 2) return 1;
	else if(n == 1) return 0;
	ll fn2=1, fn1=0 , fn;
	for (int i=3; i<=n;i++){
		fn = fn1+fn2;
		fn %= (int)(1e9 + 7);
		fn1=fn2;
		fn2=fn;
	}
	return fn;
}

int main() {
	int n;
	cin >> n;
	cout << fbn(n) << endl;
    return 0;
}

