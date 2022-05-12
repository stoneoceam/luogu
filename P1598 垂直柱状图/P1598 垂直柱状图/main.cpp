//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P1598

#include<iostream>
#include<string>

typedef struct zimu {
	char c;
	int n;
};


using namespace std;
int main() {

	zimu kk[26] = { {'A',0},{'B',0},{'C',0},{'D',0},{'E',0},{'F',0},{'G',0},
		{'H',0} ,{'I',0} ,{'J',0} ,{'K',0} ,{'L',0} ,{'M',0} ,{'N',0},
		{'O',0} ,{'P',0} ,{'Q',0} ,{'R',0} ,{'S',0} ,{'T',0} ,{'U',0} ,{'V',0} ,{'W',0} ,{'X',0} ,{'Y',0} ,{'Z',0} };

	for (int i = 0; i < 4; i++) {
		string s;
		getline(cin, s);

		for (int i = 0; i < s.size(); i++) {
			for (int j = 0; j < 26; j++) {
				if (s[i] == kk[j].c) {
					kk[j].n++;
				}
			}
		}
	}

	int max = 0;
	for (int i = 0; i < 26; i++) {
		if (kk[i].n > max) {
			max = kk[i].n;
		}
	}

	for (int i = max; i > 0; i--) {
		for (int j = 0; j < 26; j++) {
			if (kk[j].n == i) {
				cout << "*";
				kk[j].n--;
			}
			else {
				cout << " ";
			}
			if (j != 25)
				cout << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < 26; i++) {
		cout << kk[i].c;
		if (i != 25)
			cout << " ";
	}

	return 0;
}