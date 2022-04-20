//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P1425

#include<iostream>
using namespace std;
int main() {
	int a, b, c, d;
	int e, f;
	cin >> a >> b >> c >> d;
	if (b > d) {
		c = c - 1;
		f = 60 + d - b;
	}
	else {
		f = d - b;
	}
	e = c - a;
	cout << e << " " << f;
	return 0;
}
