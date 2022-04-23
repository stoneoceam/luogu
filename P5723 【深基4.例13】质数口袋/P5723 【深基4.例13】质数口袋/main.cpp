//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P5723

#include<iostream>
using namespace std;

int is_prime(int n) {
	int flag = 1;
	if (n == 1)
		flag = 0;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			flag = 0;
			break;
		}
	}
	if (flag)
		return 1;
	else
		return 0;
}

int main() {
	int K;
	cin >> K;

	int sum = 0;
	int i = 1;
	int n = 0;
	while (sum+i <= K) {
		if (is_prime(i)) {
			sum += i;
			n++;
			cout << i << endl;
		}
		i++;
	}
	cout << n;

	return 0;
}
