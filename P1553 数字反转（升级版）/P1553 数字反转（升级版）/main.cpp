//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P1553

#include<iostream>
using namespace std;

string change(string s) {
	if (s == "0")//0
		return s;

	string ss ="";
	int cc = 1;
	for (int i = s.size() - 1; i >= 0; i--) {
		if (s[i] != '0')
			cc = 0;
		if (cc && (s[i] == '0')) {
			continue;
		}
		else {
			ss += s[i];
		}
	}
	return ss;
}

int main() {
	string s;
	cin >> s;
	
	int flag = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '.') {
			flag = 2;
			break;
		}
			
		else if (s[i] == '/') {
			flag = 3;
			break;
		}
		else if (s[i] == '%') {
			flag = 4;
			break;
		}
		else {
			flag = 1;
		}
	}

	
	if (flag == 1) {
		string ss;
		ss = change(s);
		cout << ss;

	}
	else if (flag == 2) {
		string ss, a, b;
		int i = 0;
		while (s[i] != '.') {
			a += s[i];
			i++;
		}
		i++;
		while (i < s.size()) {
			b += s[i];
			i++;
		}
		a = change(a);
		b = change(b);
		ss = a + '.' + b;

		if (b != "0") {
			int cc = 0;
			for (int i = ss.size() - 1; i >= 0; i--) {
				if (ss[i] == '0')
					ss[i] = ' ';
				else {
					break;
				}
			}
		}
		cout << ss;
	}
	else if (flag == 3) {
		string ss, a, b;
		int i = 0;
		while (s[i] != '/') {
			a += s[i];
			i++;
		}
		i++;
		while (i < s.size()) {
			b += s[i];
			i++;
		}
		ss = change(a) + '/' + change(b);
		cout << ss;
	}
	else if (flag == 4) {
		string ss, a;
		int i = 0;
		while (s[i] != '%') {
			a += s[i];
			i++;
		}
		ss = change(a) + '%';
		cout << ss;
	}
	return 0;
}