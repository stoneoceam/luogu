//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P5710

#include<iostream>
using namespace std;

int func1(int x) {
	if (x % 2 == 0)
		return 1;
	else
		return 0;
}

int func2(int x) {
	if (x > 4 && x <= 12)
		return 1;
	else
		return 0;
}

int main() {
	int x;
	cin >> x;
	int a = func1(x);
	int b = func2(x);
		cout << (a && b) << " " << (a || b) << " "
		<< (!a && b || !b && a) << " " << (!a && !b);

	return 0;
}