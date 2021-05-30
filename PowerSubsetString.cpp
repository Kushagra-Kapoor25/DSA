#include<bits/stdc++.h>
using namespace std;
void powerSubset(string s)
{
	int n = s.length();
	int powsize = pow(2, n);
	for (int counter = 0; counter < powsize; counter++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((counter & (1 << j)) != 0)
				cout << s[j];
		}
		cout << endl;
	}
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s;
	getline(cin, s);
	powerSubset(s);
	return 0;
}
//O(2^n * n)
