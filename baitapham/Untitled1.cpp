#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n; cin >> n;
    long long sum = 0;
    for(long long i = 1; i <= n; i++){
        sum += i;
        if(sum > n){
        	cout << i-1 << endl;
        	break;
		}

    }
    return 0;
}
