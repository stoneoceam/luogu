//原题链接 https://www.luogu.com.cn/problem/P1518

#include<iostream>
using namespace std;

char area[10][10];

int flag;//北 1，东 2，南 3，西 4

typedef struct cc {
	int x;
	int y;
	int flag;
}cc;

int rotate(int flag) {
	flag = flag + 1;
	if (flag == 5)
		flag = 1;
	return flag;
}

void go(int& x, int& y, int& flag) {
	if (flag == 1) {
		if (area[x - 1][y] != '*' && (x - 1) >= 0)
			x = x - 1;
		else {
			flag = rotate(flag);
		}
	}
	else if (flag == 2) {
		if (area[x][y + 1] != '*' && (y + 1) < 10)
			y = y + 1;
		else {
			flag = rotate(flag);
		}
	}
	else if (flag == 3) {
		if (area[x + 1][y] != '*' && (x + 1) < 10)
			x = x + 1;
		else {
			flag = rotate(flag);
		}
	}
	else if (flag == 4) {
		if (area[x][y - 1] != '*' && (y - 1) >= 0)
			y = y - 1;
		else {
			flag = rotate(flag);
		}
	}
}

int main() {
	cc famer;//人
	cc cow;//牛

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> area[i][j];
			if (area[i][j] == 'C') {
				cow.x = i;
				cow.y = j;
				cow.flag = 1;
			}
			if (area[i][j] == 'F') {
				famer.x = i;
				famer.y = j;
				famer.flag = 1;
			}
		}
	}

	/*for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << area[i][j] << " ";
		}
		cout << endl;
	}*/

	int time = 0;
	while (time < 10000000) {//防止死循环
		go(famer.x, famer.y, famer.flag);
		go(cow.x, cow.y, cow.flag);
		time++;
		if (famer.x == cow.x && famer.y == cow.y)
			break;
	}
	if (time == 10000000)
		time = 0;
	cout << time;
	return 0;
}