#include <bits/stdc++.h>
using namespace std;
// Palindrome word: peep
bool isPal(string word, int start, int end)
{
	if (start == end)
		return true;
	if (start > end)
		return  true;
	if (word[start] != word[end])
		return false;
	return isPal(word, start + 1, end - 1);
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string w;
	getline(cin, w);
	int s = 0, e = w.length() - 1;
	if (isPal(w, s, e))
		cout << "Yes";
	else
		cout << "No";
	return 1;
}