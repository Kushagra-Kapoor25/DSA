#include<bits/stdc++.h>
using namespace std;
void unionOfElements(int a[], int m, int b[], int n)
{
	unordered_set <int> s;
	for (int i = 0; i < m; i++)
		s.insert(a[i]);
	for (int i = 0; i < n; i++)
		s.insert(b[i]);
	cout << s.size();
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int m, n;
	cin >> m >> n;
	int a[m], b[n];
	for (int i = 0; i < m; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		cin >> b[i];
	unionOfElements(a, m, b, n);
	return 0;
}