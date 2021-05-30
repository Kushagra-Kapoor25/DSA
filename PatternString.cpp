#include<bits/stdc++.h>
using namespace std;
bool areSame(int cTxt[], int cPat[])
{
	for (int i = 0; i < 256; i++)
	{
		if (cTxt[i] != cPat[i])
			return false;
	}
	return true;
}
bool isAnagramPresent(string txt, string pat)
{
	int countTxt[256] = {0}, countPat[256] = {0};
	for (int i = 0; i < pat.length(); i++)
	{
		countTxt[txt[i]]++;
		countPat[pat[i]]++;
	}
	for (int i = pat.length(); i < txt.length(); i++)
	{
		if (areSame(countTxt, countPat))
			return true;
		countTxt[txt[i]]++;
		countTxt[txt[i - pat.length()]]--;
	}
	return false;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string text, pattern;
	cin >> text >> pattern;
	cout << isAnagramPresent(text, pattern);
	return 0;
}