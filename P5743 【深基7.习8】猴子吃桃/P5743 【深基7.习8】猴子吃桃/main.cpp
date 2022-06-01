//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P5743

#include<iostream>
using namespace std;
int main() {
	int day;
	cin >> day;
	int n = 1;
	for (int i = 1; i < day; i++) {
		n = (n + 1) * 2;
	}

	cout << n;
	return 0;
}