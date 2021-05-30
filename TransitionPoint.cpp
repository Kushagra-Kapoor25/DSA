/* Question (Amazon)
You are given a sorted array containing only numbers 0 and 1. Find the transition point
efficiently. The transition point is a point where "0" ends and "1" begins(0 based indexing).

Note that, if there is no "1" exists, print -1.
Note that, in case of all 1s print 0.

Input:
The first line of the input contains T denoting the number of testcases. The first line of
the test case will be the size of array and second line will be the elements of the array.

Output:
Your function should return transition point.

Your Task:
The task is to complete the function transitionPoint() that takes array and N as input and
returns the value of the position where "0" ends and "1" begins.

Expected Time Complexity: O(LogN).
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 500000
0 ≤ C[i] ≤ 1
Example:

Input
2
5
0 0 0 1 1
4
0 0 0 0

Output
3
-1

Explanation:
Testcase 1: position 3 is 0 and next one is 1, so answer is 3.
Testcase 2: Since, there is no "1", so the answer is -1. */

// Code:
#include<bits/stdc++.h>
using namespace std;
// Transition point funtion declaration
int TransitionPoint(int arr[], int n);

// Driver code
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
		int arr[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		cout << TransitionPoint(arr, n) << endl;
	}
}
// Driver code ends

// Function to find the transition point
// Transition point funtion defination
int TransitionPoint(int arr[], int n)
{
	int low = 0, high = n - 1;
	int mid;
	// Optimizing the code
	// If the first eleent of the array is 1 so there will be no 0 in the array as the array
	// is given in the sorted order.
	if (arr[0] == 1)
		return 0;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (arr[mid] == 0 && arr[mid + 1] == 1)
			return mid + 1;
		else if (arr[mid] == 0 && arr[mid - 1] == 0)
			low = mid + 1;
		else if (arr[mid] == 1 && arr[mid + 1] == 1)
			high = mid - 1;
	}
	// If low becomes greater than the total length of the array, it means that there is no
	// 1 in the given array.
	if (low > n - 1)
		return -1;
	// If high becomes less than 0, it means that there is no 0 in the given array.
	else if (high < 0)
		return 0;
}

