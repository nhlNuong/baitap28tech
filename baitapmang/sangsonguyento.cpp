#include <bits/stdc++.h>

using namespace std;

bool prime[10000001];

void sang(){
	for(long long i = 2; i <= 10000000; i++)
		prime[i] = 1;
	for(long long i = 2; i<= sqrt(10000000); i++){
		if(prime[i]){
			for(long long j = i*i; j <= 10000000; j+=i)
				prime[j] = 0;
		}
	}
}
 
int main() {
	sang();
	long long n;
	cin >> n;
	for(int i = 2; i<=n ;i++){
		if(prime[i]) cout << i << ' ';
	}
    return 0;
}

