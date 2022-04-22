//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P4414

#include<iostream>
using namespace std;

typedef struct ss {
	int n;
	char c;
}ss;
void swap(ss* k) {
	for (int i = 0; i < 3 - 1; i++) {
		for (int j = 0; j < 3 - 1 - i; j++) {
			if (k[j].n > k[j + 1].n) {
				ss temp;
				temp = k[j];
				k[j] = k[j + 1];
				k[j + 1] = temp;
			}
		}
	}
}

int main() {
	ss k[3];
	cin >> k[0].n >> k[1].n >> k[2].n;
	swap(k);
	k[0].c = 'A';
	k[1].c = 'B';
	k[2].c = 'C';
	char h[3];
	cin >> h[0] >> h[1] >> h[2];


	for (int i = 0; i < 3; i++) {
		if (i != 0)
			cout << " ";
		for (int j = 0; j < 3; j++) {
			if (h[i] == k[j].c)
				cout << k[j].n;
		}
	}


	return 0;
}
