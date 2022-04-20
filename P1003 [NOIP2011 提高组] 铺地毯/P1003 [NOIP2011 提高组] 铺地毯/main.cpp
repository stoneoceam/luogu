//原题链接 https://www.luogu.com.cn/problem/P1003

#include<iostream>
using namespace std;

typedef struct Carpet {//地毯 
	//左下角坐标(a,b) 
	long a;
	long b;

	long j;//X轴方向上的长度 
	long k;//Y轴方向上的长度
}Carpet;



int main() {
	long n;//地毯个数 
	long x, y;//所求点的坐标 

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