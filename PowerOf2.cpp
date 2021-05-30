#include<bits/stdc++.h>
using namespace std;
bool powOf2(int n)
{
	while (n != 1)
	{
		if (n % 2 != 0)
			return false;
		n /= 2;
	}
	return true;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	cout << powOf2(n);
	return 0;
}