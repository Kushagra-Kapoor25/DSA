#include<bits/stdc++.h>
using namespace std;
int MaxDiff(int arr[], int size)
{
	int mDiff = arr[1] - arr[0];
	for (int i = 0 ; i < size - 1; i++)
		for (int j = i + 1; j < size ; j++)
			mDiff = max(mDiff, arr[j] - arr[i]);

	return mDiff;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {2 , 3 , 10 , 6, 4, 8, 1};
	int size = 7;
	int diff = MaxDiff(arr, size);
	cout << diff;
	return 1;
}