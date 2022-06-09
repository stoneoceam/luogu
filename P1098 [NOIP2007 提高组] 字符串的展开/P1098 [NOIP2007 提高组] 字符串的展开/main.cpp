//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P1098

#include<iostream>
#include<string>
using namespace std;

int is_lower(char c) {
	if (c >= '0' && c <= '9') {
		return 2;
	}
	else if (c >= 'a' && c <= 'z')
		return 1;
	else
		return 0;
}

int main() {
	int p1, p2, p3;
	cin >> p1 >> p2 >> p3;
	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '-' && (i!=0||i==s.size()-1)) {//∑¿÷π“Á≥ˆ
			char c1 = s[i - 1];
			char c2 = s[i + 1];
			int c_type1 = is_lower(c1);//–°–¥◊÷ƒ∏ 1  ˝◊÷ 2
			int c_type2 = is_lower(c2);
			if (c_type1 == c_type2) {
				if (c1 == c2) {
					continue;
				}
				if (c1 + 1 == c2) {//¿©¡–
					s.erase(i, 1);
					continue;
				}
				else if (c1 + 1 < c2) {
					string ss = "";
					if (p3 == 1) {//À≥–Ú
						for (int i = c1 + 1; i < c2; i++) {
							for (int j = 0; j < p2; j++) {
								if (p1 == 1) {
										ss += char(i);
								}
								else  if (p1 == 2) {
									if (c_type1 == 1)
										ss += char(i - 32);
									else
										ss += char(i);
								}
								else {
									ss += '*';
								}
							}
						}
					}
					else if (p3 == 2) {//ƒÊ–Ú
						for (int i = c2 - 1; i > c1; i--) {
							for (int j = 0; j < p2; j++) {
								if (p1 == 1) {
									ss += char(i);
								}
								else  if (p1 == 2) {
									if (c_type1 == 1)
										ss += char(i - 32);
									else
										ss += char(i);
								}
								else {
									ss += '*';
								}
							}
						}
					}
					s.insert(i+1, ss);
					s.erase(i, 1);
				}
				
			}
		}
	}
	cout << s;
	return 0;
}