//原题链接 https://www.luogu.com.cn/problem/P1089

#include<iostream>
using namespace std;

int month(int n, int& mather,int& ee) {
	int money = (ee + 300 - n);
	if (money < 0)
		return 0;
	else {
		mather += (money / 100) * 100;
		ee = (money) % 100;
		return 1;
	}
}

int main() {
	int months[12];
	for (int i = 0; i < 12; i++) {
		cin >> months[i];
	}

	int flag = 1;
	int mather = 0;//妈妈处的钱
	int ee = 0;//上个月的余钱
	for (int i = 0; i < 12; i++) {
		if (!month(months[i], mather, ee)) {
			cout << "-" << i+1;
			flag = 0;
			break;
		}
	}
	if(flag)
		cout << ee + mather * 1.2;
	return 0;
}
