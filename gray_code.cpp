#include <bits/stdc++.h>
using namespace std;
// string generateBin(int x)
// {
//     string ans = "";
//     while (x > 0)
//     {
//         int d = x % 2;
//         ans = to_string(d) + ans;
//         x /= 2;
//     }
//     return ans;
// }

vector<string> solve(int n)
{
    vector<string> res;
    if (n == 1)
    {
        res.push_back("0");
        res.push_back("1");
        return res;
    }

    vector<string> temp = solve(n - 1);
    int l = temp.size();
    for (int i = 0; i < l; i++)
    {
        res.push_back('0' + temp[i]);
    }

    for (int i = l - 1; i >= 0; i--)
    {
        res.push_back('1' + temp[i]);
    }

    return res;
}
int main()
{
    int n;
    cin >> n;
    // int len = pow(2, n);
    // for (int i = 0; i < len; i++)
    // {
    //     string temp = generateBin(i);
    //     int len = n - temp.size();
    //     if (len > 0)
    //     {
    //         string ss(len, '0');
    //         temp = ss + temp;
    //     }
    //     cout << temp << '\n';
    // }

    vector<string> ans = solve(n);
    for (auto it : ans)
    {
        cout << it;
        cout << '\n';
    }

    return 0;
}