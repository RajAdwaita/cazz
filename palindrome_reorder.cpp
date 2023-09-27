#include <bits/stdc++.h>
using namespace std;

bool static comp(pair<char, int> &a, pair<char, int> &b)
{
    if (a.second == b.second)
    {
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main()
{

    string str;
    cin >> str;
    unordered_map<char, int> mp;
    for (auto it : str)
    {
        mp[it]++;
    }

    int odd = 0;
    for (auto it : mp)
    {
        if (it.second % 2 != 0)
            odd++;
    }
    if (odd > 1)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    vector<pair<char, int>> vp;

    for (auto it : mp)
    {
        vp.push_back({it.first, it.second});
    }

    sort(begin(vp), end(vp));
    string front = "";
    string mid = "";
    for (auto it : vp)
    {
        if (it.second % 2 == 0)
        {
            int oc = it.second / 2;
            string s(oc, it.first);
            front += s;
        }
        else
        {
            string s(it.second, it.first);
            mid += s;
        }
    }
    front += mid;

    string back = "";
    for (auto it : vp)
    {
        if (it.second % 2 == 0)
        {
            int oc = it.second / 2;
            string s(oc, it.first);
            back = s + back;
        }
    }
    string ans = front + back;
    cout << ans << '\n';

    return 0;
}