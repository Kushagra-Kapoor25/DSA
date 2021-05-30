#include <bits/stdc++.h>
using namespace std;
void printSub(string s, string cur = "", int index = 0)
{
	if (index == s.length())
	{
		cout << cur << " ";
		return;
	}
	printSub(s, cur, index + 1);
	printSub(s, cur + s[index], index + 1);
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	/* Given a string, print all the subsets of it.
	Input: "ABC"
	Output: " ", "A", "B", "C","AB","AC","BC","ABC"*/

	printSub("ABCD");
	return 1;
}