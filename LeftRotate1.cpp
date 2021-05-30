#include<bits/stdc++.h>
using namespace std;
void leftRotate1(int arr[], int size)
{
	int t = arr[0];
	for (int i = 0; i < size - 1; i++)
		arr[i] = arr[i + 1];
	arr[size - 1] = t;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[ ] = {10, 20, 30, 40, 50, 60, 70, 80};
	int size = 8;
	leftRotate1(arr, size);
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
}