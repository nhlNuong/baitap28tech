#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
	int t,p,e;
	cin >> t;
	ll dem = 1;
	while(t--){
		cin >> p >> e;
		dem *= (e+1);
		dem %= (int)(1e9 + 7);
	}
	cout << dem << endl;
    return 0;
}

