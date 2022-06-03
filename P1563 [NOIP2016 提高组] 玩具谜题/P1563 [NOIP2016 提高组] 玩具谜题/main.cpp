//ԭ������ https://www.luogu.com.cn/problem/P1563

#include<iostream>
using namespace std;

typedef struct person {
	string name;
	int towards;//0����Ȧ�ڣ�1����Ȧ��
}person;

typedef struct order {
	int a; //0������1����
	int s; //��s����
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
		if (orders[i].a == 0 && persons[state].towards == 1) {//��ʱ������
			state = (state + orders[i].s) % n ;
		}
		else if (orders[i].a == 1 && persons[state].towards == 0) {//��ʱ������
			state = (state + orders[i].s) % n;
		}
		else if (orders[i].a == 1 && persons[state].towards == 1) {//˳ʱ������
			state = (state + n - orders[i].s) % n ;
		}
		else if (orders[i].a == 0 && persons[state].towards == 0) {//˳ʱ������
			state = (state + n - orders[i].s) % n;
		}
	}

	cout << persons[state].name;
	return 0;
}
