//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P1464

#include<iostream>
#include<cstdio>
#define ll long long
using namespace std;

ll kk[21][21][21] = {0};

ll w(ll a, ll b, ll c) {
	if (a <= 0 || b <= 0 || c <= 0)
		return 1;
	else if (a > 20 || b > 20 || c > 20)
		return w(20, 20, 20);
	else {
		if (kk[a][b][c] != 0)
			return kk[a][b][c];
		else {
			ll ans;
			if (a < b && b < c)
			ans = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
			else
			ans = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
			kk[a][b][c] = ans;
			return ans;
		}
	}
}

int main() {
	ll a, b, c;
	cin >> a >> b >> c;
	while (!(a == -1 && b == -1 && c == -1)) {
		printf("w(%lld, %lld, %lld) = %lld\n", a, b, c, w(a, b, c));
		cin >> a >> b >> c;
	}

	return 0;
}
