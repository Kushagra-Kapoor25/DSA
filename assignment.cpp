#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, k;
	cin >> n >> k;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n); //Sorting the given array: 2 3 4 5 6 7 8 9
	int  l = 0, r = 0, count = 0;
	while (r < n) //In this case n = 8
	{
		if (arr[r] - arr[l] == k)
		{
			count++;
			l++;
			r++;
		}
		else if (arr[r] - arr[l] > k)
			l++;
		else if (arr[r] - arr[l] < k)
			r++;
	}
	cout << "Number of pairs with difference " << k << " : " << count;
	return 0;
}
//Time Complexity: O(n)
//Aux Space: O(1)