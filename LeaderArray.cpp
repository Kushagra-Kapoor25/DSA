#include<bits/stdc++.h>
using namespace std;
int leader(int arr[], int size)
{
	for (int i = 0 ; i < size; i++)
	{

		bool flag = false;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] <= arr[j])
			{
				flag = true;
				break;
			}
		}
		if (flag == false)
			cout << arr[i] << " ";
	}
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {7, 10, 4, 10, 6, 5, 2, 3};
	int size = 8;
	leader(arr, size);
	return 1;
}