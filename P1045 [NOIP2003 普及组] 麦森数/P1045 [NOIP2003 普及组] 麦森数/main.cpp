//原题链接 https://www.luogu.com.cn/problem/P1045

#include<iostream>
#include<cmath>

int kk[500] = {0};

using namespace std;
int main() {
	int p;
	cin >> p;
	int a;//位数
	a = floor(log10(2) * p) + 1;//2的n次方的位数公式
	cout << a << endl;

	kk[499] = 1;

	int k = 499 - a + 1;
	if (k < 0)
		k = 0;
	
	//压位 一次×2的10次方
	int np = p / 10;
	p = p % 10;
	
	for (int i = 0; i < np; i++) {
		int temp = 0;
		for (int j = 499; j >= k; j--) {
			kk[j] = kk[j] * 1024 + temp;
			if (kk[j] >= 10 && j >= 0) {
				temp = kk[j] / 10;
				kk[j] %= 10;
			}
			else
				temp = 0;
		}
	}
	
	for (int i = 0; i < p; i++) {
		int temp = 0;
		for (int j = 499; j >= k; j--) {
			int sum = kk[j] * 2 + temp;
			temp = sum / 10;
			sum = sum % 10;
			kk[j] = sum;
		}
	}
	kk[499] = kk[499] - 1;

	for (int i = 1; i <= 500; i++) {
		cout << kk[i-1];
		if(i%50==0) {
			cout << endl;
		}
		
	}

	return 0;
}

