/* July Lunchtime CodeChef
In order to establish dominance amongst his friends, Chef has decided that he will
only walk in large steps of length exactly K feet. However, this has presented many
problems in Chef’s life because there are certain distances that he cannot traverse. Eg. If his step length is 5 feet, he cannot travel a distance of 12 feet. Chef has a strict travel plan that he follows on most days, now he is worried that some of those distances may become impossible to travel. Given N distances, tell Chef which ones he cannot travel.

Input:
The first line will contain a single integer T, the number of test cases.
The first line of each test case will contain two space separated integers - N,
the number of distances, and K, Chef’s step length.
The second line of each test case will contain N space separated integers, the ith
of which represents Di, the distance of the ith path.

Output:
For each testcase, output a string consisting of N characters. The ith character
should be 1 if the distance is traversable, and 0 if not.

Constraints
1≤T≤1000
1≤N≤1000
1≤K≤109
1≤Di≤109

Subtasks
100 points : No additional constraints.

Sample Input:
1
5 3
12
13
18
20
27216

Sample Output:
10101

EXPLANATION:
The first distance can be traversed in 4 steps.
The second distance cannot be traversed.
The third distance can be traversed in 6 steps.
The fourth distance cannot be traversed.
The fifth distance can be traversed in 9072 steps.
*/
#include<iostream>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		int d;
		for (int i = 0; i < n; i++)
		{
			cin >> d;
			if (d % k == 0)
				cout << 1;
			else
				cout << 0;
		}
		cout << endl;
	}
	return 0;
}

