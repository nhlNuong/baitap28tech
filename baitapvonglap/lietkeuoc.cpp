#include <bits/stdc++.h>

using namespace std;

int lietke(int n){
	int cnt = 0;
	for(int i = 1; i <= sqrt(n); i++ ){
		if(n%i == 0){
			if(i != n/i) cnt+=2;
			else cnt++;
		}
	}
	return cnt;
}

int main() {
	int n;
	cin >> n;
	cout << lietke(n) << endl;
	for(int i = 1; i <= n; i++ ){
		if(n%i==0) cout << i << ' '; 
	}
    return 0;
}

