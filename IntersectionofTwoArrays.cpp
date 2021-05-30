#include<bits/stdc++.h>
using namespace std;
void intersection(int a[], int na, int b[], int nb)
{
	unordered_set <int>s;
	for (int i = 0; i < na; i++)
		s.insert(a[i]);
	int res = 0;
	for (int j = 0; j < nb; j++)
	{
		if (s.find(b[j]) != s.end())
		{
			res++;
			s.erase(b[j]);
		}
	}
	cout << res;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int na, nb;
	cin >> na >> nb;
	int a[na], b[nb];
	for (int i = 0; i < na; i++)
		cin >> a[i];
	for (int i = 0; i < nb; i++)
		cin >> b[i];
	intersection(a, na, b, nb);
	return 0;
}