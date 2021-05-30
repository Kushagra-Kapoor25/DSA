#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	unordered_set <int> s;
	int n;
	cin >> n;
	while (n--)
	{
		int data;
		cin >> data;
		s.insert(data);
	}
	cout << s.size();
	return 0;
}