#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool prime[10001];

void sang(){
	for(int i = 0; i <= 10000; i++)
		prime[i] = 1;
	for(int i = 2; i <= 100; i++){
		for(int j = i*i; j <= 10000; j+=i)
			prime[j] = 0;
	}
}

bool check(int n){
	if(n == 0 || n == 1) return 1;
	ll f1 = 0, f2 = 1, fn;
	for(int i = 3; i <= 93; i++ ){
		fn = f1 + f2;
		if(fn == n) return 1;
		f1 = f2;
		f2 = fn;
	}
	return 0;
}

bool tong(int n){
	sang();
	if(prime[n]){
		int sum = 0;
		while(n){
			sum += n%10;
			n/=10;
		}
		if(check(sum)) return 1;
	}
	else return 0;
	return 0;
}

int main() {
	int n; cin >> n;
	for(int i = 2; i <= n; i++){
		if(tong(i)) cout << i << " ";
	}
    return 0;
}

