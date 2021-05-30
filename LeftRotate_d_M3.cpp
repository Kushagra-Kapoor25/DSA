#include<bits/stdc++.h>
using namespace std;
// Method 3
void reverse(int arr[], int low, int high)
{
	while (low < high)
	{
		swap(arr[low], arr[high]);
		low++;
		high -- ;
	}
}

void lRotate_d(int arr[], int size, int d)
{
	reverse(arr, 0, d - 1);
	reverse(arr, d, size - 1);
	reverse(arr, 0, size - 1);
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {10, 20, 30, 40, 50, 60, 70};
	int d, size = 7;
	cin >> d;
	if (d >= size)
		d = d - size;
	lRotate_d(arr, size, d);
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
}
// Time Complexity: O(n)
// Aux Space: O(1)