//原题链接 https://www.luogu.com.cn/problem/P5707

#include<iostream>
using namespace std;
int main() {
	unsigned int s, v;
	cin >> s >> v;

	int t;
	t = s / v;
	if (s % v != 0)
		t += 1;

	int hh = 7,mm = 50;
	
	while(t) {
		if (mm == 0) {
			mm = 60;
			hh--;
		}
		if (hh == 0) { hh = 24; }
		mm--;
		t--;
	}

	if (hh == 24)//24点置0
		hh = 0;
	if (hh < 10)
		cout << "0";
	cout << hh;
	cout << ":";
	if(mm<10)
		cout << "0";
	cout << mm;

	return 0;
}
