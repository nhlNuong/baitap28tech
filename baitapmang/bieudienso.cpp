#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool check(ll n){
	int a[1000],b[10] = {0}, k = 0;
	while(n){
		a[k++] = n%10;
		if(a[0] < n%10) return 0;
		n/=10;
		b[a[k-1]]++;
	}
	for(int i = 0; i<10; i++){
		if(b[i] != 0 && b[i] < 2 && i != a[k-1]) return 0;
	}
	return 1;
}

int main() {
	ll n; cin >> n;
	if(check(n)) cout << "YES" << endl;
	else cout << "NO" << endl; 
    return 0;
}

