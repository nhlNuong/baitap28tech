#include <bits/stdc++.h>

using namespace std;

bool stn(int n){
	int a = n, b = 0;
	while(n){
		b = b*10 + n%10;
		n/=10;
	}
	if(a == b) return 1;
	else return 0;
}

bool check(int n){
	if(stn(n)){	
		int sum = 0;
		int ok = 0;
		while(n){
			if(n%10 == 6) ok = 1;
			sum += n%10;
			n/=10;
		}
		if(sum%10 == 8 && ok == 1) return 1;
	}
	return 0;
}

int main() {
	int a,b;
	cin >> a >> b;
	for(int i = a; i <= b; i++){
		if(check(i)){
			cout << i << ' ';
		}
	}
    return 0;
}

