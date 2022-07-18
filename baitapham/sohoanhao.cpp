#include <bits/stdc++.h>

using namespace std;

int snt(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++ ){
		if(n%i==0) return 0;
	}
	return n;
}

int check(long long n){
	for(int i = 2; i <= 32; i++){
		if(snt(i)){
			long long tmp = (long long)pow(2,i) -1;
			if(snt(tmp)) {
				long long sum = tmp * (long long)pow(2,i-1);
				if(sum == n) return 1;
			}
		}
	}
	return 0;
}

int main() {
	unsigned long long n;
	cin >> n;
	if(check(n)) cout << "YES" << endl;
	else cout << "NO" << endl;
    return 0;
}

