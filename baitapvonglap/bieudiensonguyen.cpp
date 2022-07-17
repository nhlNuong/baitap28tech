#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
	int n; cin >> n;
	int cnt = 0;
	if(n == 1) cout << -1;
	else if(n == 2) cout << 1 << "\n" << 2;
	else if(n == 3) cout << 1 << "\n" << 3;
	else {
		while(n>3){
			cnt++;
			n -= 2;
		}
		cout << cnt+1 << endl;
		for(int i = 1; i <= cnt; i++){
				cout << 2 << " ";
		}
		cout << n << " ";
	}
    return 0;
}

