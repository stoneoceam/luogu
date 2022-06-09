//原题链接 https://www.luogu.com.cn/problem/P1067

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

string itoc(int n) {
	string  s = "";
	if (n == 0)
		s += '0';
	else {
		while (n) {
			int nn;
			nn = n % 10;
			n = n / 10;
			s.insert(0, 1, (nn + '0'));
		}
	}
	return s;
}

string item(int kk, int n) {
	string s = "";
	if (kk != 0) {//系数不为0
		if (kk > 0)
			s = s + '+' + itoc(abs(kk));
		else
			s = s + '-' + itoc(abs(kk));
		s = s + "x^" + itoc(n);
	}

	return s;
}

string show(int n, int* k) {
	string s = "";
	for (int i = n; i >= 0; i--) {
		s += item(k[i], i);
	}

	if (s[0] == '+')
		s.erase(0, 1);
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'x' && s[i - 1] == '1' && s[i + 2] != '0')
			s.erase(i - 1, 1);
		if (s[i] == '^' && s[i + 1] == '1' && (s[i + 2] == '+' || s[i + 2] == '-'))
			s.erase(i, 2);
		if (s[i] == '^' && s[i + 1] == '0')
			s.erase(i - 1, 3);
	}

	if (s.size() == 0)
		s = "0";
	return s;
}

int main() {
	int n;
	cin >> n;
	int* k = new int[n + 1];// 系数
	for (int i = n; i >= 0; i--) {
		cin >> k[i];
	}
	
	string result = show(n, k);
	cout << result;

	return 0;
}
