//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P5709

#include<iostream>
using namespace std;
int main() {
	int m, t, s;
	int flag=0;
	cin >> m >> t >> s;
	int i;
	for (i = 0; i <= m; i++) {
		if (i * t >= s) {
			flag = 1;
			break;
		}
	}
	if (!flag)
		cout << m-(i-1);
	else {
		if (i == m)
			cout << m - m;
		else
			cout << m - i;
		return 0;
	}
}