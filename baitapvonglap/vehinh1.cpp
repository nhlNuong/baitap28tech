#include <bits/stdc++.h>

using namespace std;

void vuong(int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++ ){
			cout << "*" ;
		}
		cout << endl;
	}
	cout << endl;
}

void vuongrong(int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++ ){
			if(i == 0 || i == n-1 || j == 0 || j == n-1)
				cout << "*" ;
			else cout << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void vuongrong1(int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++ ){
			if(i == 0 || i == n-1 || j == 0 || j == n-1)
				cout << "*" ;
			else cout << "#";
		}
		cout << endl;
	}
	cout << endl;
}

void vuongso(int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++ ){
			if(i == 0 || i == n-1 || j == 0 || j == n-1)
				cout << i+1 << " " ;
			else cout << "  ";
		}
		cout << endl;
	}
	cout << endl;
}

int main() {
	int n;
	cin >> n;
	vuong(n);
	vuongrong(n);
	vuongrong1(n);
	vuongso(n);
    return 0;
}

