//原题链接 https://www.luogu.com.cn/problem/P2615

#include<iostream>
using namespace std;

void func(int (&kk)[41][41],int n,int e) {
	if (e == 1)
		kk[1][(n + 1) / 2] = e;
	else {
		func(kk, n, e - 1);
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (kk[i][j] == (e - 1)) {
					if (i == 1 && j != n)//1
						kk[n][j + 1] = e;
					if (i != 1 && j == n)//2
						kk[i - 1][1] = e;
					if (i == 1 && j == n)//3
						kk[i + 1][j] = e;
					if (i != 1 && j != n) {//4
						if (kk[i - 1][j + 1] == 0)
							kk[i - 1][j + 1] = e;
						else
							kk[i+1][j] = e;
					}
				}
			}
		}
	}
}

int main() {
	int n;
	cin >> n;
	int kk[41][41] = { 0 };//起始位置(1,1)
	
	func(kk, n, n*n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << kk[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}