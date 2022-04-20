//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P5711

#include<iostream>
using namespace std;
int main() {
	int x;
	cin >> x;
	int flag = 0;
	if (x % 100 == 0) {
		if (x % 400 == 0)
			flag = 1;
		else
			flag = 0;
	}
	else {
		if (x % 4 == 0)
			flag = 1;
		else
			flag = 0;
	}
	cout << flag;

	return 0;
}