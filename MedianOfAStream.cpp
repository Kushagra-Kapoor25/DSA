#include<bits/stdc++.h>
using namespace std;
void findMedian(vector<int> v)
{
	int size = v.size();
	if (size & 1)
	{
		cout << v.at(size / 2) << " ";
	}
	else
	{
		double avg = (double)(v.at(size / 2 - 1) + v.at(size / 2)) / 2;
		cout << avg << " ";
	}
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {25, 7, 10, 15, 20};
	int n = sizeof(arr) / sizeof(arr[0]);
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		v.push_back(arr[i]);
		sort(v.begin(), v.end());
		findMedian(v);
	}
	return 0;
}