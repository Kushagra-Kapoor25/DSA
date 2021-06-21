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
		int xa, xb, Xa, Xb;
		cin >> xa >> xb >> Xa >> Xb;
		int total = Xa / xa + Xb / xb;
		cout << total << endl;
	}
	return 0;
}