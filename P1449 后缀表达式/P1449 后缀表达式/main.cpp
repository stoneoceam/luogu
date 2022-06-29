//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P1449

#include<iostream>
#include<stack>
using namespace std;
int main() {
	stack<int> s;
	char c;
	int cc = 0;
	while (cin >> c && c != '@') {
		if (c >= '0' && c <= '9') {
			cc = cc * 10 + (c - '0');
		}
		if (c == '.') {
			s.push(cc);
			cc = 0;
		}
		if (c == '+') {
			int a = s.top();
			s.pop();
			int b = s.top();
			s.pop();
			int temp = b + a;
			s.push(temp);
		}
		if (c == '-') {
			int a = s.top();
			s.pop();
			int b = s.top();
			s.pop();
			int temp = b - a;
			s.push(temp);
		}
		if (c == '*') {
			int a = s.top();
			s.pop();
			int b = s.top();
			s.pop();
			int temp = b * a;
			s.push(temp);
		}
		if (c == '/') {
			int a = s.top();
			s.pop();
			int b = s.top();
			s.pop();
			int temp = b / a;
			s.push(temp);
		}
	}

	cout << s.top();

	return 0;
}
