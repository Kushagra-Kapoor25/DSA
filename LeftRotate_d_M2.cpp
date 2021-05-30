#include<bits/stdc++.h>
using namespace std;
// Method 2
void lRotate_d(int arr[], int size, int d)
{
	int temp[d];
	for (int i = 0 ; i < d; i++)
		temp[i] = arr[i];
	for (int i = d; i < size; i++)
		arr[i - d] = arr[i];
	for (int i = 0; i < d ; i++)
		arr[size - d + i] = temp[i];
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