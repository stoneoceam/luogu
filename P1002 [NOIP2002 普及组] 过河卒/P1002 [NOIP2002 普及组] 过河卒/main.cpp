//题目链接 https://www.luogu.com.cn/problem/P1002

/*
* 解题思路
*	动态规划
*	从原点(0,0)到点(i,j)的路径总数为: dp[i][j] = dp[i-1][j] + dp[i][j-1]
*/

#include<iostream>
using namespace std;
int main() {
	int a_x, a_y;
	int b_x, b_y;
	int c_x, c_y;
	a_x = a_y = 2;//初始化原点为(2,2) 
	cin >> b_x >> b_y >> c_x >> c_y;
	int k[30][30] = { 0 };//初始化"棋盘"
	long long dp[30][30] = { 0 };//初始化"棋盘步数" 

	//马
	k[a_x + c_x - 2][a_y + c_y - 1] = k[a_x + c_x - 2][a_y + c_y + 1] = 1;
	k[a_x + c_x - 1][a_y + c_y - 2] = k[a_x + c_x - 1][a_y + c_y + 2] = 1;
	k[a_x + c_x][a_y + c_y] = 1;
	k[a_x + c_x + 1][a_y + c_y - 2] = k[a_x + c_x + 1][a_y + c_y + 2] = 1;
	k[a_x + c_x + 2][a_y + c_y - 1] = k[a_x + c_x + 2][a_y + c_y + 1] = 1;

	for (int i = a_x; i <= a_x + b_x; i++) {
		for (int j = a_y; j <= a_y + b_y; j++) {
			if (k[i][j])//排除掉"马的控制点"
				continue;
			else {
				if (i == a_x && j == a_y)
					dp[a_x][a_y] = 1;//初始化第一个点
				else
					dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
			}
		}
	}
	cout << dp[a_x + b_x][a_y + b_y];

	return 0;
}