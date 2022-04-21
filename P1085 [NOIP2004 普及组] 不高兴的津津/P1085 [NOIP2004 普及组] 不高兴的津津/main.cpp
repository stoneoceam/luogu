//原题链接 https://www.luogu.com.cn/problem/P1085

#include<iostream>
using namespace std;

typedef struct Class {
	int day;
	int time;
}Class;


int main() {
	Class c[7];

	for (int i = 0; i < 7; i++) {
		int a,b;
		cin >> a >> b;
		c[i].day = i + 1;
		if (a + b > 8)
			c[i].time = a + b - 8;
		else
			c[i].time = 0;
	}

	for (int i = 0; i < 7 - 1; i++) {
		for (int j = 0; j < 7 - 1 - i; j++) {
			if (c[j].time > c[j+1].time) {
				Class temp;
				temp = c[j];
				c[j] = c[j + 1];
				c[j + 1] = temp;
			}
			if (c[j].time == c[j + 1].time) {
				if (c[j].day < c[j + 1].day) {
					Class temp;
					temp = c[j];
					c[j] = c[j + 1];
					c[j + 1] = temp;
				}
			}
		}
	 }

	if (c[6].time)
		cout << c[6].day;
	else
		cout << "0";//都高兴输出0

	return 0;
}
