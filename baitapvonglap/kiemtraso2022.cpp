#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int ok = 0;
	while(n--){
		int x;
		cin >> x;
		if( x == 2022) ok = 1;
	}
	if(ok) cout << "YES" << endl;
	else cout << "NO" << endl;
    return 0;
}

