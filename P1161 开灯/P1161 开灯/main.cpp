//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P1161

#include<iostream>
using namespace std;
int kk[2000000] = { 0 };
int main() {
	
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		double a;
		int t;
		cin >> a >> t;
		for (int j = 1; j <= t; j++) {
			if (kk[int(a*j)]) {
				kk[int(a * j)] = 0;
			}
			else
				kk[int(a * j)] = 1;
		}
	}

	for (int i=0;; i++) {
		if (kk[i] == 1) {
			cout << i;
			break;
		}
	}
	return 0;
}