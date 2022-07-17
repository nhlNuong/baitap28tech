#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
	int n; cin >> n;
	int chai = n/28 ,vo = chai;
	while(vo>=3){
		chai += vo/3;
		vo = vo%3 + vo/3;
	}
	cout << chai << endl;
    return 0;
}

