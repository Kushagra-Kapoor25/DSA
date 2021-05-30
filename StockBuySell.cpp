#include<bits/stdc++.h>
using namespace std;
int maxProfit(int price[], int size)
{
	int profit = 0;
	for (int i = 1; i < size; i++)
		if (price[i] > price[i - 1])
			profit += price[i] - price[i - 1];
	return profit;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {1, 5, 3, 8, 12};
	int res = maxProfit(arr, 5);
	cout << res;
	return 1;
}