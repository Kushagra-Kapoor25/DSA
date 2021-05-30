#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		int c = 0, m = 0;
		while (n--)
		{
			int A, B;
			cin >> A >> B;
			int sumA = 0, sumB = 0;
			while (A > 0)
			{
				sumA += A % 10;
				A /= 10;
			}
			while (B > 0)
			{
				sumB += B % 10;
				B /= 10;
			}
			if (sumA > sumB)
				c++;
			else if (sumB > sumA)
				m++;
			else
			{
				c++;
				m++;
			}
		}
		if (c > m)
			cout << "0" << " " << c;
		else if (m > c)
			cout << "1" << " " << m;
		else
			cout << "2" << " " << c;
		cout << endl;
	}
}