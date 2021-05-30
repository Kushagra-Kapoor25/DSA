#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[], int size)
{
	int low = 0;
	int high = size - 1;
	while (low < high)
	{
		int temp = arr[low];
		arr[low] = arr[high];
		arr[high] = temp;
		low++;
		high--;
	}
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[ ] = {10, 15, 20, 25, 30 , 45, 50};
	int size = 7;
	reverse(arr , size);
	for ( int i = 0; i < size; i++)
		cout << arr[i] << " ";
	return 1;
}