#include<bits/stdc++.h>
using namespace std;
struct Triplet
{
	int val, aPos, vPos;
	Triplet(int v, int ap, int vp)
	{
		val = v;
		aPos = ap;
		vPos = vp;
	}
};

struct MyCmp
{
	bool operator()(Triplet &t1, Triplet &t2)
	{
		return t1.val > t2.val;
	}
};


vector<int> mergeKSortedArrays(vector<vector<int>> &arr)
{
	vector<int> res;
	priority_queue<Triplet, vector<Triplet>, MyCmp> pq;
	for (int i = 0; i < arr.size(); i++)
	{
		Triplet t(arr[i][0], i, 0);
		pq.push(t);
	}
	while (!pq.empty())
	{
		Triplet curr = pq.top();
		pq.pop();
		res.push_back(curr.val);
		int ap = curr.aPos, vp = curr.vPos;
		if (vp + 1 < arr[ap].size())
		{
			Triplet t(arr[ap][vp + 1], ap, vp + 1);
			pq.push(t);
		}
	}
	return res;
}


int main()
{
#ifndef ONLINE_JUDGE
	freopen("inpit.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	vector<vector<int>> v = {{10, 20, 30},
		{5, 25},
		{1, 9, 11, 18}
	};
	vector<int> x = mergeKSortedArrays(v);
	for (auto p : x)
		cout << p << " ";
	return 0;
}
// O(nklogk)