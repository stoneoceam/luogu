//原题链接 https://www.luogu.com.cn/problem/P5716

#include<iostream>
using namespace std;

int func(int year) {
	if (year % 100 == 0) {
		if (year % 400 == 0)
			return 1;
		else
			return 0;
	}
	else {
		if (year % 4 == 0)
			return 1;
		else
			return 0;
	}
}

int main() {
	int months[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int year,month;
	cin >> year >> month;
	
	if (func(year))//判断是否为闰年
		months[1] = 29;

	cout << months[month-1];

	return 0;
}
