#include<bits/stdc++.h>
using namespace std;
int memo[100];
int fibMemoization(int n)
{
	if (memo[n] == -1)
	{
		int res;
		if (n < 2)
			res =  n;
		else
			res = fibMemoization(n - 1) + fibMemoization(n - 2);
		memo[n] = res;
	}
	return memo[n];
}

int finTabulation(int n)
{
	int fn[n + 1];
	fn[0] = 0, fn[1] = 1;
	for (int i = 2; i <= n; i++)
		fn[i] = fn[i - 1] + fn[i - 2];
	return fn[n];
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("intput.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n = 10;
	memset(memo, -1, sizeof(memo));
	cout << fibMemoization(n) << endl;
	cout << finTabulation(n) << endl;
	return 0;
}