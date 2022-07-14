#include <bits/stdc++.h>

using namespace std;

void tichuoc(int n){
	long long tich = 1;
	for(int i = 1; i <= sqrt(n); i++){
		if(n%i == 0){
			if(i != n/i){
				tich *= i * n/i; 
			}
			else tich *= i;
		}
	}
	cout << tich << endl;
}

int main() {
	int n;
	cin >> n;
	tichuoc(n);
    return 0;
}

