//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P5725

#include<iostream>
#include<cstdio>
using namespace std;

void square(int n) {
	int k = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%02d", k);
			k++;
		}
		cout << endl;
	}
}

void triangle(int n) {
	int k = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j < n - i - 1)
				cout << "  ";
			else {
				printf("%02d", k);
				k++;
			}
		}
		cout << endl;
	}
}

int main() {
	int n;
	cin >> n;

	square(n);
	cout << endl;
	triangle(n);


	return 0;
}