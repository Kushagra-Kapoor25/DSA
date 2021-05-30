#include<bits/stdc++.h>
using namespace std;
struct Interval
{
	int start, end;
};
bool myComp(Interval a1, Interval a2)
{
	return	(a1.start < a2.start);
}
void mergeOverlapIntervals(Interval arr[], int n)
{
	sort(arr, arr + n, myComp);
	int res = 0 ;
	for (int i = 1; i < n; i++)
	{
		if (arr[res].end >= arr[i].start)
		{
			arr[res].end = max(arr[res].end, arr[i].end);
			arr[res].start = min(arr[res].start, arr[i].start);
		}
		else
		{
			res++;
			arr[res] = arr[i];
		}
	}
	for (int i = 0; i <= res; i++)
		cout << arr[i].start << " " << arr[i].end << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	struct Interval arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i].start >> arr[i].end;
	sort(arr, arr + n, myComp);
	mergeOverlapIntervals(arr, n);
	return 0;
}
// Time Complexity: O(nlogn)
// Aux Space: O(1)