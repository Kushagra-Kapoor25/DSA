/* Question
Given an array arr[] and a number K where K is smaller than size of array, the task is
to find the Kth smallest element in the given array. It is given that all array elements
are distinct.

Input:
The first line of input contains an integer T, denoting the number of testcases. Then T
test cases follow. Each test case consists of three lines. First line of each testcase
contains an integer N denoting size of the array. Second line contains N space separated
integer denoting elements of the array. Third line of the test case contains an integer
K.

Output:
Corresponding to each test case, print the kth smallest element in a new line.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= T <= 100
1 <= N <= 105
1 <= arr[i] <= 105
1 <= K <= N

Example:
Input:
2
6
7 10 4 3 20 15
3
5
7 10 4 20 15
4
Output:
7
15

Explanation:
Testcase 1: 3rd smallest element in the given array is 7.
Testcase 2: 4th smallest elemets in the given array is 15.*/
#include<bits/stdc++.h>
using namespace std;
int kthSmallestElement(vector<int> v ,  int k)
{
	sort(v.begin(), v.end());
	return v.at(k - 1);
}
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
		vector<int> v;
		for (int i = 0; i < n; i++)
		{
			int data;
			cin >> data;
			v.push_back(data);
		}
		cout << kthSmallestElement(v,  k) << endl;
		v.clear();
	}
}
//Naive Approach
//Time complexity:O(nlogn)