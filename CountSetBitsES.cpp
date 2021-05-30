#include <bits/stdc++.h>
using namespace std;
int countSetBits(int n)
{
	int res = 0;
	while (n > 0)
	{
		n = (n & (n - 1));
		res++;
	}
	return res;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	cout << countSetBits(n);
	return 0;
}
// Brian Kerningam's Algorithm
// O(Number of set bits)
