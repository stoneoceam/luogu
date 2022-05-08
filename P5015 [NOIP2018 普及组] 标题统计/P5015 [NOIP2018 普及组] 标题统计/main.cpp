//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P5015


#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	getline(cin, s);
	int sum = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != ' ')
			sum++;
	}

	cout << sum;
	return 0;
}
