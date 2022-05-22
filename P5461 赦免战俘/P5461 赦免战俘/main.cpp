//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P5461

#include<iostream>
#include<cmath>
using namespace std;

int kk[1024][1024];

void zs(int k, int x, int y) {
	for (int i = x; i < x + k; i++) {
		for (int j = y; j < y + k; j++) {
			kk[i][j] = 0;
		}
	}
}

void pardon(int k,int x,int y) {
	if (k != 1) {
		zs(k / 2, x, y);
		pardon(k / 2, x + k / 2, y);
		pardon(k / 2, x, y + k / 2);
		pardon(k / 2, x + k / 2, y + k / 2);
	}
		
}

int main() {
	int n,nn;
	cin >> n;
	nn = pow(2, n);
	for (int i = 0; i < nn; i++) {
		for (int j = 0; j < nn; j++) {
			kk[i][j] = 1;
		}
	}

	pardon(nn,0,0);

	for (int i = 0; i < nn; i++) {
		for (int j = 0; j < nn; j++) {
			cout << kk[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
}