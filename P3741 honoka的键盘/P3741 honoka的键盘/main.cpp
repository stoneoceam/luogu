//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P3741

#include<iostream>
#include<string>
using namespace std;
int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;

	int chance = 1;
	int sum = 0;
	int i = 0;
	while(i<n-1) {
		if (s[i] == 'V' && s[i + 1] == 'K') {
			sum++;
			s[i] = s[i + 1] = ' ';
		}
		i++;
	}

	for (int i = 0; i < n - 1; i++) {
		if (s[i] == 'V' && s[i + 1] != ' ' && chance) {
			s[i] = s[i + 1] = ' ';
			chance = 0;
			sum++;
		}
		else if (s[i] != ' ' && s[i + 1] == 'K' && chance) {
			s[i] = s[i + 1] = ' ';
			chance = 0;
			sum++;
		}
	}

	cout << sum;
	return 0;
}