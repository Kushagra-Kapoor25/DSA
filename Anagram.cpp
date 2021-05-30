#include<bits/stdc++.h>
using namespace std;
bool anagram(string a, string b)
{
	if (a.length() != b.length())
		return false;
	int count[256] = {0};
	for (int i = 0; i < a.length(); i++)
		count[a[i]]++;
	for (int i = 0; i < b.length(); i++)
		count[b[i]]--;
	for (int i = 0; i < 256; i++)
		if (count[i] != 0)
			return false;
	return true;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s1, s2;
	cin >> s1;
	cin >> s2;
	cout << anagram(s1, s2);
	return 0;
}