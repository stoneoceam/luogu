//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P1597

#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main() {
	int a = 0, b = 0, c = 0;
	string s;
	getline(cin, s);
	
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ';') {
			char aa = s[i - 4];
			char bb = s[i - 1];
			if (bb >= '0' && bb <= '9') {
				if (aa == 'a')
					a = bb - '0';
				else if(aa == 'b')
					b = bb - '0';
				else if(aa == 'c')
					c = bb - '0';
			}
			if (bb >= 'a' && bb <= 'c') {
				if (aa == 'a') {
					if (bb == 'a')
						a = a;
					else if (bb == 'b')
						a = b;
					else if (bb == 'c')
						a = c;
				}
				else if (aa == 'b') {
					if (bb == 'a')
						b = a;
					else if (bb == 'b')
						b = b;
					else if (bb == 'c')
						b = c;
				}
				else if (aa == 'c')
					if (bb == 'a')
						c = a;
					else if (bb == 'b')
						c = b;
					else if (bb == 'c')
						c = c;
			}
		}
	}
	

	cout << a << " " << b << " " << c;
	return 0;
}