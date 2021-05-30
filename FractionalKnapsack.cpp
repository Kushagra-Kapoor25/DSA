#include<bits/stdc++.h>
using namespace std;
struct  Item
{
	int weight;
	int value;

};
bool cmp(struct Item a, struct Item b)
{
	double r1 = (double)a.value / a.weight;
	double r2 = (double)b.value / b.weight;
	return r1 > r2;
}
void fractionalKnapsack(struct Item arr[], int n, int given_cap)
{
	sort(arr, arr + n, cmp);
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i].weight <= given_cap)
		{
			given_cap -= arr[i].weight;
			res += arr[i].value;
		}
		else
		{
			res += arr[i].value * given_cap / arr[i].weight;
			break;
		}
	}
	cout << res;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int n = 3, given_cap = 70;
	struct Item arr[] = {{50, 600}, {20, 500}, {30, 400}};
	fractionalKnapsack(arr, n, given_cap);
	return 0;
}