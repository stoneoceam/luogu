//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P1423

#include<iostream>
using namespace std;
int main() {
	double x;
	cin >> x;

	double d = 2;
	int n = 0;
	while (x > 0) {
		x = x - d;
		d = d * 0.98;
		n++;
	}

	cout << n;

	return 0;
}