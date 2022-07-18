#include <bits/stdc++.h>

using namespace std;

bool snt(long long n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i == 0) return 0;
	}
	return 1;
}

bool check(long long n){
	if(snt(n)){
		int a = n%10;
		if(a == 9) return 1;
		n/=10;
		while(n){
			if(a < n%10) return 0;
			n/=10;
		}
	}
	else return 0;
	return 1;
}

int main() {
	long long n;
	int cnt = 0;
	cin >> n;
	for(int i =2; i<=n; i++){
		if(check(i)){
			cout << i << " ";
			cnt ++;
		}
	}
	cout << "\n" << cnt;
    return 0;
}

