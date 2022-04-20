//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P1421

#include<iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	float sum = a + b * 0.1;
	int n = sum / 1.9;
	cout << n;
	return 0;
}