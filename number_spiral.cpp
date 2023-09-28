#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long ans = 0;
        long long x, y;
        cin >> x >> y;
        if (x > y)
        {
            if (x % 2 == 0)
            {
                ans = x * x;
                ans -= (y - 1);
            }
            else
            {
                ans = (x - 1) * (x - 1);
                ans += 1;
                ans += (y - 1);
            }
        }
        else
        {
            if (y % 2 != 0)
            {
                ans = y * y;
                ans -= (x - 1);
            }
            else
            {
                ans = (y - 1) * (y - 1);
                ans += 1;
                ans += (x - 1);
            }
        }
        cout << ans << '\n';
    }

    return 0;
}