#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int cnt = 0;
        int p = sqrt(x);
        for (int i = 1; i <= p; i++)
        {
            if (i * i == x)
            {
                cnt++;
                continue;
            }
            if (x % i == 0)

                cnt += 2;
        }
        cout << cnt << '\n';
    }

    return 0;
}