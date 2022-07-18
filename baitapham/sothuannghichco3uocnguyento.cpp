#include <bits/stdc++.h>

using namespace std;

bool stn(int n){
	int a = n, b = 0;
	while(n){
		b = b*10 + n%10;
		n/=10;
	}
	if(a == b) return 1;
	else return 0;
}

bool check(int n){
	if(stn(n)){
		int cnt = 0;
		for(int i = 2; i<=sqrt(n); i++){
			if(n%i == 0){
				cnt++;
			}
			while(n%i == 0) n/=i;
		}
		if(n!=1) cnt++;
		if(cnt > 2) return 1;
	}
	return 0;
}

int main() {
	int a,b;
	bool ok = 1;
	cin >> a >> b;
	for(int i = a; i <= b; i++){
		if(check(i)){
			cout << i << ' ';
			ok = 0;
		}
	}
	if(ok) cout << -1 << endl;
    return 0;
}

