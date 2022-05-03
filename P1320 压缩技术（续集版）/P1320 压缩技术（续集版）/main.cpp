//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P1320

#include<iostream>
using namespace std;
int main() {
	string s;
	cin >> s;
	int N = s.size();
	for (int i = 1; i < N; i++) {
		string temp;
		cin >> temp;
		s += temp;
	}

	cout << N;
	char temp = '0';
	int n = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == temp) {
			n++;
		}
		else {
			cout << ' ' << n;
			temp = s[i];
			n = 1;
		}
	}
	cout <<' ' << n;
	return 0;
}