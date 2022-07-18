#include <bits/stdc++.h>

using namespace std;

using ll = long long;

bool prime[1000001];

void sang(){
	for(int i = 2; i <= 1000000; i++)
		prime[i] = 1;
	prime[1] = prime[0] = 0;
	for(int i = 2; i<= 1000; i++){
		if(prime[i]){
			for(int j = i*i; j <= 1000000; j+=i)
				prime[j] = 0;
		}
	}
}

int main() {
	sang();
	ll n; cin >> n;
	int cnt = 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(prime[i]) cnt++;
	}
	cout << cnt << endl;
    return 0;
}

