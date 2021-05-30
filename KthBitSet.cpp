#include<bits/stdc++.h>
using namespace std;
// Method 1- Using Left Shift Operator
void kthBitSetLeftShift(int n, int k)
{
	if (n & (1 << (k - 1)) != 0)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
// Method 2- Using Right Shift Operator
void kthBitSetRightShift(int n, int k)
{
	if ((n >> (k - 1)) & 1 == 1)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, k ;
	cin >> n >> k;
	kthBitSetLeftShift(n, k);
	kthBitSetRightShift(n, k);
	return 1;
}