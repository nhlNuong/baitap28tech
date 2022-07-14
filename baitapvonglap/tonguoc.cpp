#include <bits/stdc++.h>

using namespace std;

long long tonguoc(long long n){
	long long sum = 0;
	for(int i = 1; i <= sqrt(n); i++){
		if(n%i == 0){
			if(i != n/i) sum += i + n/i;
			else sum += i ;
		}
	}
	return sum;
}

int main() {
	long long n;
	cin >> n;
	cout << tonguoc(n) << endl;
    return 0;
}

