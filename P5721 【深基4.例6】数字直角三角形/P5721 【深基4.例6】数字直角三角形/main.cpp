//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P5721

#include<iostream>
using namespace std;

void number(int n) {
	if (n < 10) {
		cout << "0" << n;
	}
	else
		cout << n;
}

int main() {
	int n;
	cin >> n;
	
	int k = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			number(k);
			k++;
		}
		if (i < n - 1)
			cout << endl;
	}

	return 0;
}