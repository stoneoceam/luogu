//ԭ������ https://www.luogu.com.cn/problem/P1928

#include<iostream>
#include<string>
using namespace std;

void open(string& s, int k1, int k2) {

	int n = 0;
	if (s[k1 + 1] >= '0' && s[k1 + 1] <= '9')
		n = (s[k1 + 1] - '0');
	if (s[k1 + 2] >= '0' && s[k1 + 2] <= '9') {
		n = ((s[k1 + 2] - '0') + (n * 10));
		string ss;
		for (int j = 1; j <= n; j++) {
			for (int k = k1 + 3; k < k2; k++) {
				ss += s[k];
			}
		}
		s.erase(k1, k2 - k1 + 1);//ɾ����k1��ʼ��k2-k1+1��Ԫ��
		s.insert(k1, ss);//��k1λ��ǰ�����ַ���ss
	}
	else {
		string ss;
		for (int j = 1; j <= n; j++) {
			for (int k = k1 + 2; k < k2; k++) {
				ss += s[k];
			}
		}
		s.erase(k1, k2 - k1 + 1);
		s.insert(k1, ss);
	}
}


int main() {

	string s;
	cin >> s;
	int k1 = 0;
	int k2 = 0;
	int i = 0;
	while (i < s.size()) {
		if (s[i] == '[')
			k1 = i;
		if (s[i] == ']') {
			k2 = i;
			open(s, k1, k2);
			i = 0;
		}
		else
			i++;
	}
	cout << s;
	return 0;
}