#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
	int n; cin >> n;
	ll sum = 0;
	while(n--){
		int x; cin >> x;
		if(x%2==0) sum+=x;
	}
	cout << sum << endl;
    return 0;
}

