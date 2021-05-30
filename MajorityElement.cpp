#include<bits/stdc++.h>
using namespace std;
int majority(int arr[], int n)
{
	//Phase 1: Finds a candidate.
	int res = 0, count = 1;
	for (int i = 1; i < n; i++)
	{
		if (arr[res] == arr[i])
			count++;
		else
			count--;
		if (count == 0)
		{
			res = i;
			count = 1;
		}
	}
	//Phase 2: Checks if the candidate is actually majority.
	count = 0;
	for (int i = 0; i < n; i++)
		if (arr[res] == arr[i])
			count++;
	if (count <= n / 2)
		res = -1;
	return res;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {8, 3, 4, 8, 8};
	int size = 5;
	int ans = majority(arr, size);
	cout << ans;
}
//This is known as Moorey's Voting Algorithm.