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

    for (int i = 0; i < q; i++)
    {
        cin >> a >> b;
        // b = b - 1;
        a = a - 1;
        // if (b < 0)
        //     b = 0;
        // if (a < 0)
        //     a = 0;
        ll sum1 = presum[b];
        ll sum2 = presum[a];
        cout << (sum1 - sum2) << endl;
        // cout << presum[a - 1] << endl;
        // cout << presum[b - 1] << endl;
        // b
    }

    return 0;
}