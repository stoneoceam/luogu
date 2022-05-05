//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P1914

#include<iostream>
#include<string>
using namespace std;
int main() {
	int n;
	cin >> n;
	cin.get();
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		s[i] = (s[i] + n- 'a') % 26 + 'a';
	}

	cout << s;
	return 0;
}