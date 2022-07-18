#include <bits/stdc++.h>

using namespace std;

bool prime[1000001];

void sang(){
	for(long long i = 2; i <= 1000000; i++)
		prime[i] = 1;
	prime[1] = prime[0] = 0;
	for(long long i = 2; i<= sqrt(1000000); i++){
		if(prime[i]){
			for(long long j = i*i; j <= 1000000; j+=i)
				prime[j] = 0;
		}
	}
}
 
int main() {
	sang();
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		if(prime[n]) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
    return 0;
}

