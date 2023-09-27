#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    // cin >> t;
    ll c = 0;
    // while (t--)
    // {
    int n;
    cin >> n;
    ll ans = 0;
    ll f = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     f *= i;
    // }
    // while (f > 0)
    // {
    //     int d = f % 10;
    //     if (d == 0)
    //     {
    //         c++;
    //     }
    //     else
    //     {
    //         break;
    //     }
    //     f /= 10;
    // }
    if (n <= 0 || n < 5)
    {
        cout << c << endl;
        return 0;
    }
    else
    {
        while (n > 0)
        {
            c += n / 5;
            n /= 5;
        }
    }
    // }
    cout << c << endl;

    return 0;
}