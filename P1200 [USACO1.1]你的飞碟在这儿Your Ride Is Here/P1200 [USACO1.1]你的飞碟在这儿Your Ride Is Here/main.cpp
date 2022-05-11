//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P1200

#include<iostream>
#include<string>
using namespace std;

int change(char c) {
	int n;
	n = c - 'A' + 1;
	return n;
}

int main() {
	string UFO;
	string team;
	cin >> UFO >> team;

	long long a = 1, b = 1;
	for (int i = 0; i < UFO.size(); i++) {
		a *= change(UFO[i]);
	}

	for (int i = 0; i < team.size(); i++) {
		b *= change(team[i]);
	}
	a = a % 47;
	b = b % 47;
	if (a == b) {
		cout << "GO";
	}
	else {
		cout << "STAY";
	}

	return 0;
}