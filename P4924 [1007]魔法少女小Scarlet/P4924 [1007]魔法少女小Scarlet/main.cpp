//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P4924

#include<iostream>
using namespace std;

int kk[501][501];

void rotate(int x, int y, int r, int z) {
	int temp[501][501];
	for (int i = x - r; i <= x + r; i++) {
		for (int j = y - r; j <= y + r; j++) {
			temp[i][j] = kk[i][j];
		}
	}
	if (z == 0) {
		int y1 = y + r;
		for (int i = x - r; i <= x + r; i++) {
			int x1 = x - r;
			for (int j = y - r; j <= y + r; j++) {
				kk[x1][y1] = temp[i][j];
				x1++;
			}
			y1--;
		}
	}
	if(z == 1) {
		int y1 = y - r;
		for (int i = x - r; i <= x + r; i++) {
			int x1 = x + r;
			for (int j = y - r; j <= y + r; j++) {
				kk[x1][y1] = temp[i][j];
				x1--;
			}
			y1++;
		}
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	int k = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			kk[i][j] = k;
			k++;
		}
	}
	for (int i = 0; i < m; i++) {
		int x, y, r, z;
		cin >> x >> y >> r >> z;
		rotate(x, y, r, z);
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << kk[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}