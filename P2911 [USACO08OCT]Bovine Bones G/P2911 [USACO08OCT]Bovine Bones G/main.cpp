//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P2911

#include<iostream>
using namespace std;
int main() {
	int S1, S2, S3;
	cin >> S1 >> S2 >> S3;
	
	int kk[81] = {0};
	for (int i = 1; i <= S1; i++) {
		for (int j = 1; j <= S2; j++) {
			for (int k = 1; k <= S3; k++) {
				kk[i+j+k]++;
			}
		}
	}
	int MAX_size = 0;
	int MAX_n = 0;
	for (int i = 0; i <= 80; i++) {
		if (MAX_size < kk[i]) {
			MAX_size = kk[i];
			MAX_n = i;
		}
	}

	cout << MAX_n;
	return 0;
}
