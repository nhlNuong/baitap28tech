#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool check(ll n){
	int a[20],k=0;
	while(n){
		a[k++] = n%10;
		n/=10;
	}
	if(a[0] != 2*a[k-1] && 2*a[0] != a[k-1]) return 0;
	int l=1, r=k-2; 
	for(l;l<=r;){
		if(a[l] != a[r]) return 0;
		l++;r--;
	}
	return 1;
}

int main() {
	ll n; cin >> n;
	if(check(n)) cout << "YES" << endl;
	else cout << "NO" << endl;
    return 0;
}

