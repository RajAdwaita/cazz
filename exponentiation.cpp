#include <bits/stdc++.h>
using namespace std;
long long int M = 1e9 + 7;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        long long int ans = 1;
        long long int bb = b;
        while (bb)
        {
            if (bb % 2 == 1)
            {
                ans = ans * a;
                ans %= M;
                bb -= 1;
            }
            else
            {

                a = a * a;
                a %= M;
                bb /= 2;
            }
        }
        cout << ans % M << endl;
    }

    return 0;
}