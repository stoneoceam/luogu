//ԭ������ https://www.luogu.com.cn/problem/P1307

#include<iostream>
#include<cstring>
using namespace std;
int main() {
	char k1[12];
	char k2[12];
	cin >> k1;
	
	if (k1[0] == '0')//����Ϊ0ʱֱ�����0
		cout << "0";
	else {
		int len = strlen(k1);
		int i = 0;
		if (k1[i] == '-') {   //���Ŵ���
			k2[i] = k1[i];
			i++;
			cout << '-';
		}

		int j = i;   //��k1���Ŵ���k2
		if (k2[0] == '-') {
			for (i; i < len; i++) {
				k2[len - i] = k1[i];
			}
		}
		else {
			for (i; i < len; i++) {
				k2[len - i - 1] = k1[i];
			}
		}

		int flag = 1; //��ӡk2
		for (j; j < len; j++) {
			if (k2[j] != '0') {
				flag = 0;
			}
			if (k2[j] == '0' && flag)
				cout << "";
			else
				cout << k2[j];
		}
	}
	return 0;
}