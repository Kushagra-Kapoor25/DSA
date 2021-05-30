#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int d1, v1, d2, v2, p;
	cin >> d1 >> v1 >> d2 >> v2 >> p;
	int v_p = 0;
	int cd = 1;
	while (v_p < p)
	{
		int production_start = min(d1, d2);
		if (cd >= production_start)
		{
			if (cd >= d1)
				v_p += v1;
			if (cd >= d2)
				v_p += v2;
		}
		if (v_p < p)
			cd++;
	}
	cout << cd << endl;
	return 0;
}