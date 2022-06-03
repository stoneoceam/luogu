//原题链接 https://www.luogu.com.cn/problem/P1563

#include<iostream>
using namespace std;

typedef struct person {
	string name;
	int towards;//0面向圈内，1面向圈外
}person;

typedef struct order {
	int a; //0左数，1右数
	int s; //第s个人
}order;

int main() {
	int n, m;
	cin >> n >> m;
	
	person* persons = new person[n];
	for (int i = 0; i < n; i++) {
		cin >> persons[i].towards >> persons[i].name;
	}

	order* orders = new order[m];
	for (int i = 0; i < m; i++) {
		cin >> orders[i].a >> orders[i].s;
	}

	int state = 0;
	for (int i = 0; i < m; i++) {
		if (orders[i].a == 0 && persons[state].towards == 1) {//逆时针找人
			state = (state + orders[i].s) % n ;
		}
		else if (orders[i].a == 1 && persons[state].towards == 0) {//逆时针找人
			state = (state + orders[i].s) % n;
		}
		else if (orders[i].a == 1 && persons[state].towards == 1) {//顺时针找人
			state = (state + n - orders[i].s) % n ;
		}
		else if (orders[i].a == 0 && persons[state].towards == 0) {//顺时针找人
			state = (state + n - orders[i].s) % n;
		}
	}

	cout << persons[state].name;
	return 0;
}
