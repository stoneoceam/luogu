//ԭ������ https://www.luogu.com.cn/problem/P1591

#include<iostream>

using namespace std;
int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n, a;
		cin >> n >> a;
		int kk[100000] = {0};
		kk[1] = 1;

		//�߾������� ��׳�
		int len = 1;//�׳����ĳ���
		int temp = 0;//��λ��
		for (int j = 1; j <= n; j++) {
			for (int k = 1; k <= len; k++) {
				kk[k] = kk[k] * j + temp;
				if (kk[k] >= 10) {
					temp = kk[k] / 10;
					kk[k] %= 10;
				}
				else
					temp = 0;
			}
			while (temp != 0) {
				len++;
				kk[len] = temp % 10;
				temp /= 10;
			}
		}
		//ͳ��a�ĸ���
		int sum = 0;
		for (int j = 1; j <= len; j++) {
			if (kk[j] == a)
				sum++;
		}
		cout << sum << endl;
	}

	return 0;
}