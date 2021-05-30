#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	unordered_map <char, int> stringSet ;
	while (t--)
	{
		stringSet['P'] = 0;
		stringSet['C'] = 0;
		stringSet['M'] = 0;
		string s;
		cin >> s;
		int flag = 1;
		for (auto c : s)
		{
			stringSet[c]++;
			if (stringSet[c] > 1)
			{
				flag = 0;
				break;
			}
		}
		if (flag)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}