#include <bits/stdc++.h>

using namespace std;

double sum(int n){
	double tong = 0;
	for(int i = 1; i<= n;i++){
		tong += 1.0/(2*i);
	}
	return tong;
}

int main() {
	int n;
	cin >> n;
	cout << fixed << setprecision(5) << sum(n) << endl;
    return 0;
}

