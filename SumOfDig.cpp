#include <bits/stdc++.h>
using namespace std;
int fun(int n)
{
	if (n < 10) return n;
	return fun(n / 10) + n % 10;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	cout << fun(n) << " ";
}