//原题链接 https://www.luogu.com.cn/problem/P1042

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

void Contest(string s,int win) {
	int W_score = 0;
	int L_score = 0;

	for (int i = 0; i < s.size()+1; i++) {
		
		if ((W_score >= win || L_score >= win) && (abs(W_score - L_score) >= 2)) {//获胜输出，比分置0
			cout << W_score << ":" << L_score << endl;
			W_score = L_score = 0;
		}


		
		if (s[i] == 'W') {
			W_score++;
		}
		if (s[i] == 'L') {
			L_score++;
		}
	}

	cout << W_score << ":" << L_score << endl;
}


int main() {
	string s;
	char c;
	while (cin >> c && c != 'E') {
		if (c == '\n')
			continue;
		s += c;
	}

	Contest(s, 11);
	cout << endl;
	Contest(s, 21);
	return 0;
}