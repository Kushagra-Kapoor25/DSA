#include <bits/stdc++.h>
using namespace std;
int main()
{

#ifndef ONLINE_JUDGE
	freopen( "input.txt", "r", stdin);
	freopen( "output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int cht[n];
	for (int i = 0; i < n; i++)
		cin >> cht[i];
	int *pa, *pb;
	int a = 0, b = 0;
	pa = &cht[0];
	pb = &cht[n - 1];
	int sat = cht[0], sbt = cht[n - 1];
	while (pa < pb)
	{
		if (sat < sbt)
		{
			a++;
			pa++;
			sat += *pa;
		}
		else if (sbt < sat)
		{
			b++;
			pb--;
			sbt += *pb;
		}
		else
		{
			a++;
			b++;
			pa++;
			pb--;
			if (pa > pb) break;
			sat += *pa;
			sbt += *pb;
		}
	}
	if (n % 2 == 0 && n > 2)
	{
		if (sat < sbt)
			cout << a + 1 << " " << b << endl;

		else if (sbt < sat)
			cout << a << " " << b + 1 << endl;
		else
			cout << a   << " " << b << endl;
	}
	else if (n % 2 != 0 && n > 2)
	{
		if (sat < sbt)
			cout << a + 1 << " " << b << endl;

		else if (sbt < sat)
			cout << a << " " << b + 1 << endl;
		else
			cout << a + 1   << " " << b << endl;
	}
	else if (n == 2)
		cout << 1 << " " << 1;
	else if (n == 1)
		cout << 1 << " " << 0;

	return 0;
}
