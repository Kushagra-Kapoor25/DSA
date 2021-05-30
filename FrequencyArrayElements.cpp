#include<bits/stdc++.h>
using namespace std;
void getFrequency(int arr[], int n)
{
	unordered_map <int, int> m;
	for (int i = 0; i < n; i++)
		m[arr[i]]++;
	for (auto e : m)
		cout << e.first << " " << e.second << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	getFrequency(arr, n);
	return 0;
}