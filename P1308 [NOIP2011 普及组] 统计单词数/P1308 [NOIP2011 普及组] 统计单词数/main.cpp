//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P1308

#include<iostream>
#include<string>
using namespace std;

void lower(string& s) {
	for (int i = 0; i < s.size(); i++) {
		s[i] = tolower(s[i]);
	}
}


int main() {
	string T;
	string S;
	cin >> T;
	cin.get();
	getline(cin, S);
	S = ' ' + S + ' ';

	lower(T);
	lower(S);
	
	int begin = 0;
	int flag = 1;
	int n = 0;
	int a = 0;
	int b = 0;
	string SS;
	for (int i = 0; i < S.size(); i++,b++) {
		if (S[a] == ' ' && S[b] == ' ' && a != b) {
			SS = S.substr(a + 1, b - a - 1);
			if (T == SS) {
				if (flag == 1) {
					begin = a;
				}
				flag = 0;
				n++;
			}
			a = b;
		}
	}

	if (n == 0)
		cout << -1;
	else {
		cout << n << ' ' << begin;
	}

	return 0;
}