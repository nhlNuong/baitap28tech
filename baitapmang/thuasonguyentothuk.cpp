#include <bits/stdc++.h>

using namespace std;

int a[10000] = {0};

int check(long long n){
	int cnt = 0;
	int i = 2;
	while(i<=n/i){
		if(n%i == 0){
			n/=i;
			a[++cnt] = i;
		}
		else i++;
	}
	if(n!=1) a[++cnt] = n;
	return cnt;
}

int main() {
	
	long long n, k;
	cin >> n >> k;
	check(n);
	if(a[k] != 0)
		cout << a[k] << endl;
	else cout << -1 << endl;
    return 0;
}

