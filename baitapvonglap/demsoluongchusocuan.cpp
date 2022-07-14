#include <bits/stdc++.h>

using namespace std;

void demchuso(long long n){
	int cnt = 0;
	while(n){
		cnt++;
		n/=10;
	}
	cout << cnt << endl;
}

int main() {
	long long n;
	cin >> n;
	if(n == 0) cout << 1 << endl;
	else demchuso(n);
    return 0;
}

