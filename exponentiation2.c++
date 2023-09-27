#include <bits/stdc++.h>
using namespace std;
long long int M = 1e9 + 7;
long long int calc_disp(long long int base, long long int expo, long long int mod)
{
    if (expo == 0)
        return 1;

    long long int res = calc_disp(base, expo / 2, mod);
    if (expo % 2 == 1)
    {
        return (((res * res) % mod) * base) % mod;
    }
    else
    {
        return (res * res) % mod;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        long long int expo = calc_disp(b, c, M - 1);
        cout << calc_disp(a, expo, M) << endl;
    }

    return 0;
}