#include<bits/stdc++.h>
using namespace std;
#define MAX 100000

set<int> alive, goingToDie, nextToDie;
int level[MAX + 5];
const int inf = 1000000000;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int i, n, day = 0;
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> level[i];

    level[0] = inf;
    for (i = 1; i <= n; i++)
    {
        alive.insert(i); // 3 6 2 7 5
        if (level[i] > level[i - 1])
            goingToDie.insert(i); // 
    }

    while (goingToDie.size())
    {
        day++;
        for (auto x : goingToDie)
            alive.erase(x);

        nextToDie.clear();
        for (auto x : goingToDie)
        {
            auto itr = alive.lower_bound(x);
            if (itr == alive.begin() || itr == alive.end())
                continue;
            auto previous = itr;
            previous--;
            if (level[*itr] > level[*previous])
                nextToDie.insert(*itr);
        }
        goingToDie = nextToDie;
    }
    cout << day << endl;
    return 0;
}
// Time complexity: O(nlogn)
// Data Structure used: Set