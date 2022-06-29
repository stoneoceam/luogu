//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P3613

#include<iostream>
#include<map>
using namespace std;
map<int, int>m[100001];

int main()
{
    int n, q;
    cin >> n >> q;
    int a, i, j, x;
    for (int k = 1; k <= q; k++) {
        cin >> a >> i >> j;
        if (a == 1) {
            cin >> x;
            m[i][j] = x;
        }
        else
            cout << m[i][j] << endl;
    }

    return 0;
}