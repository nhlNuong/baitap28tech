#include <bits/stdc++.h>

using namespace std;

void demchuso(long long n){
	int cnt = 0;
	while(n){
		int a = n%10;
		if(a==2 || a==3 || a==5 || a==7) cnt++;
		n/=10;
	}
	cout << cnt << endl;
}

int main() {
	long long n;
	cin >> n;
	demchuso(n);
    return 0;
}

