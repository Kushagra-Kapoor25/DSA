#include<bits/stdc++.h>
using namespace std;
int leftMostNonRepeating(string str)
{
	int fI[256];
	for (int i = 0; i < 256; i++)
		fI[i] = -1;
	for (int i = 0; i < str.length(); i++)
	{
		if (fI[str[i]] == -1)
			fI[str[i]] = i;
		else
			fI[str[i]] = -2;
	}
	int res = INT_MAX;
	for (int i = 0; i < 256; i++)
	{
		if (fI[i] >= 0)
			res = min(res, fI[i]);
	}
	return (res == INT_MAX) ? -1 : res;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s;
	cin >> s;
	cout << leftMostNonRepeating(s);
	return 0;
}