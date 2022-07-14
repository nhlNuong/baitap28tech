#include <bits/stdc++.h>

using namespace std;

void hinh1(int n){
	int x = 1;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << x << ' ';
			x++;
		}
		cout << endl;
	}
	cout << endl;
}
void hinh2(int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << j+i+1 << ' ';
		}
		cout << endl;
	}
	cout << endl;
}

void hinh3(int n){
	int x = 1;
	for(int i = n-1; i >= 0; i--){
		for(int j = 0; j < n; j++){
			if(j < i) cout << "~";
			else cout << x;
		}
		x++;
		cout << endl;
	}
	cout << endl;
}

void hinh4(int n){
	int x = 1;
	for(int i = 0; i < n; i++){
		int a = n;
		int v = x;
		for(int j = 0; j <= i; j++){
			if(j==0) cout << x << " ";
			else {
				v += a;
				cout << v << " ";
			}
			a--;
		}
		x++;
		cout << endl;
	}
	cout << endl;
}

int main() {
	int n;
	cin >> n;
	hinh1(n);
	hinh2(n);
	hinh3(n);
	hinh4(n);
    return 0;
}

