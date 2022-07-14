#include <bits/stdc++.h>

using namespace std;

void tamgiac1(int n){
	for(int i = 0; i < n;i++ ){
		for(int j = 0; j<=i; j++){
			cout << "*" ;
		}
		cout << endl;
	}
	cout << endl;
}
void tamgiac2(int n){
	for(int i = n-1; i >= 0;i-- ){
		for(int j = 0; j<=i; j++){
			cout << "*" ;
		}
		cout << endl;
	}
	cout << endl;
}
void tamgiac3(int n){
	for(int i = n-1; i >= 0;i-- ){
		for(int j = 0; j < n; j++){
			if(j < i) cout << " ";
			else cout << "*" ;
		}
		cout << endl;
	}
	cout << endl;
}
void tamgiac4(int n){
	for(int i = 0; i < n;i++ ){
		for(int j = 0; j < n; j++){
			if(j >= i) cout << "*";
			else cout << " " ;
		}
		cout << endl;
	}
	cout << endl;
}
void tamgiac5(int n){
	for(int i = 0; i < n;i++ ){
		for(int j = 0; j <= i; j++){
			if(i == 0 || i == n-1 || j == i || j == 0)
				cout << "*" ;
			else cout << " ";
		}
		cout << endl;
	}
	cout << endl;
}

int main() {
	int n;
	cin >> n;
	tamgiac1(n);
	tamgiac2(n);
	tamgiac3(n);
	tamgiac4(n);
	tamgiac5(n);
    return 0;
}

