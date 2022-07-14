#include <bits/stdc++.h>

using namespace std;

long long sum(int n){
	long long tong = 0;
	for(int i = 1; i<= n;i++){
		tong += (long long)pow(i,3);
	}
	return tong;
}

int main() {
	int n;
	cin >> n;
	cout << sum(n) << endl;
    return 0;
}

