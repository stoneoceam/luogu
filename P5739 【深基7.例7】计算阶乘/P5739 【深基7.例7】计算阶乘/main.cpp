//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P5739

#include<iostream>
using namespace std;

#define llint long long 

llint factorial(llint n) {
	if (n == 0 || n == 1)
		return 1;
	else
		return n * factorial(n - 1);
}

int main() {
	int n;
	cin >> n;
	cout << factorial(n);

	return 0;
}