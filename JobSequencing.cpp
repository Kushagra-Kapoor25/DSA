#include<bits/stdc++.h>
using namespace std;
struct Job
{
	int deadline;
	int profit;
};
bool cmp(struct Job j1, struct Job j2)
{
	return j1.profit > j2.profit;
}

void jobSequencing(struct Job jobs[], int n)
{
	vector<int> v;
	sort(jobs, jobs + n, cmp);
	int res = 0;
	bool slot[n];
	for (auto x : slot)
		x = false;
	for (int i = 0; i < n; i++)
	{
		for (int j = jobs[i].deadline - 1; j >= 0; j--)
		{
			if (slot[j] == false)
			{
				v.push_back(i);
				res += jobs[i].profit;
				slot[j] = true;
				break;
			}
		}
	}
	for (int x : v)
		cout << x << " ";
	cout << endl << res;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	struct Job jobs[] = {{2, 100}, {1, 19}, {2, 20}, {1, 25}, {3, 15}};
	int n = sizeof(jobs) / sizeof(struct Job);
	jobSequencing(jobs, n);
	return 0;
}