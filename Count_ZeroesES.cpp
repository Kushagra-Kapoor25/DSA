// Efficient Solution
#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		int sum = 0;
		for (int i = 0; i < n; i++)
			sum = sum + arr[i];
		cout << n - sum << endl;
	}
}
