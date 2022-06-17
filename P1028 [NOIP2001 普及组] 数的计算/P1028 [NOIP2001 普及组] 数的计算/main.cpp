//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P1028

#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int kk[2000] = { 0 };
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i / 2; j++) {
			kk[i] += kk[j];
		}
		kk[i] += 1;
	}

	cout << kk[n];
	return 0;
}
