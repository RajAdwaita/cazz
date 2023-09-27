#include <bits/stdc++.h>
using namespace std;
long long int M = 1e9 + 7;
int main()
{
    long long int x;
    cin >> x;
    long long int n = 2;
    long long int ans = 1;
    // long long int k = ;
    while (x > 0)
    {
        if (x % 2 == 0)
        {
            n = n * n;
            n %= M;
            x /= 2;
        }
        else
        {
            ans = ans * n;
            ans %= M;
            x--;
        }
    }
    cout << ans << endl;

    return 0;
}