//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P2670

#include<iostream>
using namespace std;

char kk[101][101];

int main() {
	int row, line;
	cin >> row >> line;
	
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < line; j++) {
			cin >> kk[i][j];
		}
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < line; j++) {
			if (kk[i][j] != '*') {
				int sum = 0;
				if ((i - 1) >= 0 && (j - 1) >= 0 && kk[i - 1][j - 1] == '*') sum++;
				if ((i - 1) >= 0 && j >= 0 && kk[i - 1][j] == '*') sum++;
				if ((i - 1) >= 0 && (j + 1) >= 0 && kk[i - 1][j + 1] == '*') sum++;
				if (i >= 0 && (j - 1) >= 0 && kk[i][j - 1] == '*') sum++;
				if (i >= 0 && (j + 1) >= 0 && kk[i][j + 1] == '*') sum++;
				if ((i + 1) >= 0 && (j - 1) >= 0 && kk[i + 1][j - 1] == '*') sum++;
				if ((i + 1) >= 0 && j >= 0 && kk[i + 1][j] == '*') sum++;
				if ((i + 1) >= 0 && (j + 1) >= 0 && kk[i + 1][j + 1] == '*') sum++;
				kk[i][j] = '0' + sum;
			}
		}
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < line; j++) {
			cout << kk[i][j];
		}
		cout << endl;
	}

	return 0;
}