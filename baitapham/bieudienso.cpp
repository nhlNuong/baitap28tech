#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool check1(ll n){
	if(n%111111111==0 || n%111111111==0 || n%11111111==0||n%1111111==0||n%111111==0||n%11111==0||n%1111==0||n%111==0||n%11==0)
		return 1;
	return 0;
}

bool check(ll n){
	int m = 111111111;
	while(n > 10){
		if(check1(n)) return 1;
		n%=m;
		m/=10;
	}
	return 0;
}

int main() {
	ll n; cin >> n;
	if(check(n)) cout << "YES" << endl;
	else cout << "NO" << endl; 
    return 0;
}

