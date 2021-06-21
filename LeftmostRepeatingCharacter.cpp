#include<bits/stdc++.h>
using namespace std;
int firstRepeating(string str)
{
	int res = INT_MAX;
	int fI[256];
	for (int i = 0; i < 256; i++)
		fI[i] = -1;
	for (int i = str.length() - 1; i >= 0; i --)
	{
		if (fI[str[i]] == -1)
			fI[str[i]] = i;
		else
			res = fI[str[i]];
	}
	return (res == INT_MAX) ? -1 : res;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s1;
	cin >> s1;
	cout << firstRepeating(s1);
	return 0;
}