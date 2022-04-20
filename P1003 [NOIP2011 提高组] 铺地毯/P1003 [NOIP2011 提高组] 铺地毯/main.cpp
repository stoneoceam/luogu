//ԭ������ https://www.luogu.com.cn/problem/P1003

#include<iostream>
using namespace std;

typedef struct Carpet {//��̺ 
	//���½�����(a,b) 
	long a;
	long b;

	long j;//X�᷽���ϵĳ��� 
	long k;//Y�᷽���ϵĳ���
}Carpet;



int main() {
	long n;//��̺���� 
	long x, y;//���������� 

	//Input
	cin >> n;
	Carpet* carpet = new  Carpet[n];
	for (int i = 0; i < n; i++) {
		long a, b, j, k;
		cin >> a >> b
			>> j >> k;
		carpet[i].a = a;
		carpet[i].b = b;
		carpet[i].j = j;
		carpet[i].k = k;
	}
	cin >> x >> y;

	int flag = 0;
	for (long i = n - 1; i >= 0; i--) {
		if (x >= carpet[i].a && x <= carpet[i].a + carpet[i].j && y >= carpet[i].b && y <= carpet[i].b + carpet[i].k) {
			flag = 1;
			cout << i + 1;
			break;
		}
	}

	//Output
	if (!flag)
		cout << "-1";

	return 0;
}