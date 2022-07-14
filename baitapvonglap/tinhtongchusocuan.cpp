#include <bits/stdc++.h>

using namespace std;

void demchuso(long long n){
	int sum = 0;
	while(n){
		sum += n%10;
		n/=10;
	}
	cout << sum << endl;
}

int main() {
	long long n;
	cin >> n;
	demchuso(n);
    return 0;
}

