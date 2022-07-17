#include <bits/stdc++.h>

using namespace std;
using ll = long long;



int main() {
	int a,b,n;
	cin >> a >> b >> n;
	for(int i = 0 ; i <= n/a; i++){
		int hieu = n - a*i;
		if(hieu % b == 0){
			cout << "YES" << endl;
			return 0;
		}
	}
    cout << "NO\n";
}

