//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P2669

#include<iostream>
using namespace std;
int main() {
	int k;
	cin >> k;
	
	int day = 1;
	int n = 1, j = 1;
	long sum = 0;
	while (day <= k) {
		if (j > n) {
			j = 1;
			n = n + 1;
		}
		sum += n;
		day++;
		j++;
	}

	cout << sum;

	return 0;
}
