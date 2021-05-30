#include<bits/stdc++.h>
using namespace std;
// Method 1
void lRotate_d(int arr[], int size, int d)
{
	for (int i = 0; i < d; i++)
	{
		int temp = arr[0];
		for (int j = 0 ; j < size - 1; j++)
			arr[j] = arr[j + 1];
		arr[size - 1] = temp;
	}
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