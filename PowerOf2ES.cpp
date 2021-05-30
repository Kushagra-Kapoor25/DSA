#include<bits/stdc++.h>
using namespace std;
bool powOf2(int n)
{
	if (n == 0)
		return false;
	int res = 0;
	while (n > 0)
	{
		n = n & (n - 1);
		res++;
		if (res > 1)
			return false;
	}
	if (res == 1)
		return true;
}
bool powOf2ES(int n)
{
	if (n == 0)
		return false;
	return (!(n & (n - 1)));
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	cout << powOf2(n) << endl;
	cout << powOf2ES(n) << endl;
	return 0;
}
//Brain Kerningams Algorithm