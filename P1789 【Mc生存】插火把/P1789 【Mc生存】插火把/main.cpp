//原题链接 https://www.luogu.com.cn/problem/P1789

#include<iostream>
using namespace std;
int kk[100 + 3][100 + 3] = { 0 };
int main() {
	int n, m, k;
	cin >> n >> m >> k;
	for (int i = 0; i < m; i++) {
		int m1, m2;//火柴
		cin >> m1 >> m2;
		kk[m1 + 2 - 2][m2 + 2] = 1;
		kk[m1 + 2 - 1][m2 + 2 - 1] = kk[m1 + 2 - 1][m2 + 2] = kk[m1 + 2 - 1][m2 + 2 + 1] = 1;
		kk[m1 + 2][m2 + 2 - 2] = kk[m1 + 2][m2 + 2 - 1] = kk[m1 + 2][m2 + 2] = kk[m1 + 2][m2 + 2 + 1] = kk[m1 + 2][m2 + 2 + 2] = 1;
		kk[m1 + 2 + 1][m2 + 2 - 1] = kk[m1 + 2 + 1][m2 + 2] = kk[m1 + 2 + 1][m2 + 2 + 1] = 1;
		kk[m1 + 2 + 2][m2 + 2] = 1;
	}

	for (int i = 0; i < k; i++) {
		int k1, k2;//萤石
		cin >> k1 >> k2;
		kk[k1 + 2 - 2][k2 + 2 - 2] = kk[k1 + 2 - 2][k2 + 2 - 1] = kk[k1 + 2 - 2][k2 + 2] = kk[k1 + 2 - 2][k2 + 2 + 1] = kk[k1 + 2 - 2][k2 + 2 + 2] = 1;
		kk[k1 + 2 - 1][k2 + 2 - 2] = kk[k1 + 2 - 1][k2 + 2 - 1] = kk[k1 + 2 - 1][k2 + 2] = kk[k1 + 2 - 1][k2 + 2 + 1] = kk[k1 + 2 - 1][k2 + 2 + 2] = 1;
		kk[k1 + 2][k2 + 2 - 2] = kk[k1 + 2][k2 + 2 - 1] = kk[k1 + 2][k2 + 2] = kk[k1 + 2][k2 + 2 + 1] = kk[k1 + 2][k2 + 2 + 2] = 1;
		kk[k1 + 2 + 1][k2 + 2 - 2] = kk[k1 + 2 + 1][k2 + 2 - 1] = kk[k1 + 2 + 1][k2 + 2] = kk[k1 + 2 + 1][k2 + 2 + 1] = kk[k1 + 2 + 1][k2 + 2 + 2] = 1;
		kk[k1 + 2 + 2][k2 + 2 - 2] = kk[k1 + 2 + 2][k2 + 2 - 1] = kk[k1 + 2 + 2][k2 + 2] = kk[k1 + 2 + 2][k2 + 2 + 1] = kk[k1 + 2 + 2][k2 + 2 + 2] = 1;
	}

	int sum = 0;
	for (int i = 3; i < n + 3; i++) {
		for (int j = 3; j < n + 3; j++) {
			if (kk[i][j] == 0)
				sum++;
		}
	}

	cout << sum;
	return 0;
}