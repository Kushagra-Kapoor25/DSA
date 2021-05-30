/*
Mystic Falls School (which has classes from 1 to 12) allots admission numbers to
Students as negative and  positive integers. Damon is a new admission in this school
and he is the 199th student to get admission in class 11th. To his surprise, he has
been allotted admission number as  -189. Damon being a curious guy wants to know the
logic behind the admission number allotment. Can you help him!

Input:
The first line of the input contains an integer T denoting the number of test cases.
The description of each testcase follows. Each test case contains a single line with
2 integers which are Xth student and  Gth grade i.e. class.

Output:
For each test case, output a new line with a single integer which should be the the
admission number of the Xth student.

Constraints:
1 < =  G  < = 12
1 < =  X  <  = 10000
1 < = T  < = 900

Example:

Input :
6
129  5
150  7
556  8
9  2
348  10
223  12

Output :
-125
-144
-549
-8
-339
-212
*/

#include<bits/stdc++.h>
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
		int  x, g;
		cin >> x >> g;
		int res = (x - g + 1) * -1;
		cout << res << endl;
	}
	return 0;
}