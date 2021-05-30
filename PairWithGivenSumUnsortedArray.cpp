#include<bits/stdc++.h>
using namespace std;
bool isPair(int arr[], int n, int sum)
{
	unordered_set<int> s;
	for (int i = 0; i < n; i++)
	{
		if (s.find(sum - arr[i]) != s.end())
			return true;
		s.insert(arr[i]);
	}
	return false;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, sum;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cin >> sum;
	cout << isPair(arr, n, sum);
	return 0;
}