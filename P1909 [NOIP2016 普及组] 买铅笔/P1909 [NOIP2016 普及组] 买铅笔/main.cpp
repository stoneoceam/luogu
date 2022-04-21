//ԭ������ https://www.luogu.com.cn/problem/P1909

#include<iostream>
#include<cmath>
using namespace std;

typedef struct pencils {
	float amount;
	int price;
}pencils;

int main() {
	long min = 10000000;

	int n;
	cin >> n;

	pencils p[3];
	for (int i = 0; i < 3; i++) {
		cin >> p[i].amount >> p[i].price;
	}

	for (int i = 0; i < 3; i++) {
		int num = ceil(n / p[i].amount);//ceil<-cmath ����ȡ�� floor����ȡ��
		long sum = num * p[i].price;
		if (sum < min) {
			min = sum;
		}
	}
	
	cout << min;

	return 0;
}



