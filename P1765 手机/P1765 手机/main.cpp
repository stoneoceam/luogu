//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P1765

#include<iostream>
#include<string>
using namespace std;
int main() {
	string S;
	getline(cin, S);

	int n = 0;
	for (int i = 0; i < S.size(); i++) {
		if (S[i] == 'a' || S[i] == 'd' || S[i] == 'g' || S[i] == 'j' || S[i] == 'm' || S[i] == 'p' || S[i] == 't' || S[i] == 'w' || S[i] == ' ') {
			n += 1;
		}
		if (S[i] == 'b' || S[i] == 'e' || S[i] == 'h' || S[i] == 'k' || S[i] == 'n' || S[i] == 'q' || S[i] == 'u' || S[i] == 'x') {
			n += 2;
		}
		if (S[i] == 'c' || S[i] == 'f' || S[i] == 'i' || S[i] == 'l' || S[i] == 'o' || S[i] == 'r' || S[i] == 'v' || S[i] == 'y') {
			n += 3;
		}
		if (S[i] == 's' || S[i] == 'z') {
			n += 4;
		}
	}

	cout << n;
	return 0;
}