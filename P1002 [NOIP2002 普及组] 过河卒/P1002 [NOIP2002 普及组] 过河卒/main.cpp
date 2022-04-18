//��Ŀ���� https://www.luogu.com.cn/problem/P1002

/*
* ����˼·
*	��̬�滮
*	��ԭ��(0,0)����(i,j)��·������Ϊ: dp[i][j] = dp[i-1][j] + dp[i][j-1]
*/

#include<iostream>
using namespace std;
int main() {
	int a_x, a_y;
	int b_x, b_y;
	int c_x, c_y;
	a_x = a_y = 2;//��ʼ��ԭ��Ϊ(2,2) 
	cin >> b_x >> b_y >> c_x >> c_y;
	int k[30][30] = { 0 };//��ʼ��"����"
	long long dp[30][30] = { 0 };//��ʼ��"���̲���" 

	//��
	k[a_x + c_x - 2][a_y + c_y - 1] = k[a_x + c_x - 2][a_y + c_y + 1] = 1;
	k[a_x + c_x - 1][a_y + c_y - 2] = k[a_x + c_x - 1][a_y + c_y + 2] = 1;
	k[a_x + c_x][a_y + c_y] = 1;
	k[a_x + c_x + 1][a_y + c_y - 2] = k[a_x + c_x + 1][a_y + c_y + 2] = 1;
	k[a_x + c_x + 2][a_y + c_y - 1] = k[a_x + c_x + 2][a_y + c_y + 1] = 1;

	for (int i = a_x; i <= a_x + b_x; i++) {
		for (int j = a_y; j <= a_y + b_y; j++) {
			if (k[i][j])//�ų���"��Ŀ��Ƶ�"
				continue;
			else {
				if (i == a_x && j == a_y)
					dp[a_x][a_y] = 1;//��ʼ����һ����
				else
					dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
			}
		}
	}
	cout << dp[a_x + b_x][a_y + b_y];

	return 0;
}