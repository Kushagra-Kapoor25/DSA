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
	while (t--)
	{
		unordered_map<int, int> colourCount;
		int n, x, y, k;
		cin >> n >> x >> y >> k;
		int c[n];
		for (int i = 0; i < n; i++)
			cin >> c[i];
		for (int i = 0; i < n; i++)
			colourCount[c[i]]++;
		for (auto x : colourCount )
			cout << "Colour number:" << x.first << "  Count: " << x.second << endl;

	}

	return 0;
}