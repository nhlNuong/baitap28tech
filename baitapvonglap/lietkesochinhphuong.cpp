#include <bits/stdc++.h>

using namespace std;

void cp(long long n){
	for(long long i = 1 ; i <= sqrt(n); i++){
		cout << i*i << ' ';
	}
}

int main() {
	long long n;
	cin >> n;
	cp(n);
    return 0;
}

