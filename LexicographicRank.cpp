#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
	int fact = 1;
	for (int i = 1; i <= n; i++)
		fact *= i;
	return fact;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string str;
	cin >> str;
	int rank = 1;
	int n = str.length();
	int mul = fact(n);
	int count[256] = {0};
	for (int i = 0; i < 256; i++)
		count[str[i]]++;
	for (int i = 1; i < 256; i++)
		count[i] = count[i] + count[i - 1];
	for (int i = 0; i < n; i++)
	{
		mul = mul / (n - i);
		rank += count[str[i] - 1] * mul;
		for (int j = str[i]; j < 265; j++)
			count[j]--;
	}
	cout << rank;
	return 0;
}