#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    long long int n, q;
    cin >> n >> q;
    vector<long long int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll a, b;
    ll summ = 0;
    vector<ll> presum(n + 1);
    for (int i = 0; i < n; i++)
    {
        summ += arr[i];
        presum[i + 1] = summ;
    }
    ll t;

    for (int i = 0; i < q; i++)
    {
        cin >> t >> a >> b;
        ll diff = b - arr[a - 1];
        if (t == 1)
        {
            for (ll j = a - 1; j < n; j++)
            {
                presum[j] += diff;
            }
            continue;
        }

        a = a - 1;

        ll sum1 = presum[b];
        ll sum2 = presum[a];
        cout << (sum1 - sum2) << endl;
    }

    return 0;
}